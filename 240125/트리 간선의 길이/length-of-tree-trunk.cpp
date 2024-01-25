#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int n,a,b,c,visited[10010],dist[10010],mx,idx;
vector<pair<int,int>> v[10010];


void traverse(int cur, int cnt){
    visited[cur]=1;
    dist[cur]=cnt;
    for (int i = 0; i<v[cur].size(); i++){
        int nxt=v[cur][i].first;
        int nd=cnt+v[cur][i].second;
        if (visited[nxt]) continue;
        traverse(nxt,nd);
    }
}

void get_mx_dist(){
    mx=0;
    idx=-1;
    for (int i = 1; i<=n; i++){
        if (dist[i]>mx) {
            mx=dist[i];
            idx=i;
        }
    }
}

int main() {
    cin >> n;
    for (int i = 0; i<n-1; i++){
        cin >> a >> b >> c;
        v[a].push_back({b,c});
        v[b].push_back({a,c});
    }

    traverse(1,0);
    get_mx_dist();
    
    memset(visited,0,sizeof(visited));
    memset(dist,0,sizeof(dist));

    traverse(idx,0);
    get_mx_dist();

    cout << mx;

    return 0;
}