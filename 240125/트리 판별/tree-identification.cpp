#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

vector<int> v[10010];
int m,a,b,visited[10010],ans=1,node[10010],root[10010],r;

// 순회해서 갈 수 없는 노드가 있는 경우 0;
// 방문한 적 있는 노드가 nxt로 나온다면 0;

void traverse(int cur){
    visited[cur]=1;
    for (int i = 0; i<v[cur].size(); i++){
        int nxt=v[cur][i];
        if (visited[nxt]) {
            ans=0;
            return;
        }
        traverse(nxt);
    }
}

int main() {
    cin >> m;
    memset(root,1,sizeof(root));
    for (int i = 0; i<m; i++){
        cin >> a >> b;
        v[a].push_back(b);
        node[a]=1;
        node[b]=1;
        root[b]=0;
    }
    
    for (int i = 1; i<=10000; i++){
        if (node[i] && root[i]) r=i;
    }

    traverse(r);

    for (int i = 1; i<=10000; i++){
        if (node[i] && !visited[i]) ans=0;
    }

    cout << ans;

    return 0;
}