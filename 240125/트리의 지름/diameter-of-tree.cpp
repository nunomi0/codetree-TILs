#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int n,a,b,c,visited[100010],dist[100010];
vector<pair<int,int>> v[100010];

void recur(int cur, int cnt){
    visited[cur]=1;
    dist[cur]=cnt;
    for (int i = 0; i<v[cur].size(); i++){
        int nxt=v[cur][i].first;
        int nd=v[cur][i].second;
        if (visited[nxt]) continue;
        recur(nxt, cnt+nd);
    }
}

int main() {
    cin >> n;
    for (int i = 0; i<n-1; i++){
        cin >> a >> b >> c;
        v[a].push_back({b,c});
        v[b].push_back({a,c});
    }
    recur(1,0);

    int mx=0;
    int idx=0;
    for (int i = 1; i<=n; i++){
        if (dist[i]>mx) {
            mx=dist[i];
            idx=i;
        }
    }

    memset(visited,0,sizeof(visited));
    recur(idx,0);
    
    int ans=0;
    for (int i = 1; i<=n; i++){
        ans=max(ans,dist[i]);
    }
    cout << ans;

    return 0;
}