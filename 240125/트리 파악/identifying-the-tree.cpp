#include <iostream>
#include <vector>
using namespace std;

int n,a,b,dist[100010],leaf[100010],visited[100010],ans=0;
vector<int> v[100010];

void traverse(int cur, int cnt){

    visited[cur]=1;
    dist[cur]=cnt;
    if (cur!=1 && v[cur].size()==1) leaf[cur]=1;

    for (int i = 0; i<v[cur].size(); i++){
        int nxt=v[cur][i];
        if (visited[nxt]) continue;
        traverse(nxt,cnt+1);
    }
}

int main() {
    cin >> n;
    for (int i = 0; i<n-1; i++){
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    traverse(1,0);

    // a가 먼저 시작 -> 짝수 번 째 턴(b차례)에 모든 리프에 대한 dist가 0 (남은 dist 합==0) -> a 승리
    // 리프노드의 dist 합이 홀수이면 a 승리

    for (int i = 1; i<=n; i++){
        if (leaf[i]) ans+=dist[i];
    }
    
    cout << ans;

    return 0;
}