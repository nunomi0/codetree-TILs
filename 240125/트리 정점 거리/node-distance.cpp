#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int n,m,a,b,c,visited[1010],dist[1010][1010];
vector<pair<int,int>> v[1010];

void traverse(int root, int cur, int cnt){
    visited[cur]=1;

    dist[root][cur]=cnt;
    dist[cur][root]=cnt;

    for (int i = 0; i<v[cur].size(); i++){
        int nxt=v[cur][i].first;
        int nd=cnt+v[cur][i].second;
        if (!visited[nxt]) traverse(root,nxt,nd);
    }
}

int main() {
    cin >> n >> m;
    for (int i = 0; i<n-1; i++){
        cin >> a >> b >> c;
        v[a].push_back({b,c});
        v[b].push_back({a,c});
    }

    for (int i = 1; i<=n; i++){
        memset(visited,0,sizeof(visited));
        traverse(i,i,0);
    }

    for (int i = 0; i<m; i++){
        cin >> a >> b;
        cout << dist[a][b] << '\n';
    }
    return 0;
}