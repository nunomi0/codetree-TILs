#include <iostream>
#include <vector>
using namespace std;

int n,r,u,q,a,b,dp[100010],visited[100010];
vector<int> v[100010];


int recur(int cur){
    visited[cur]=1;

    for (int i = 0; i<v[cur].size(); i++){
        int nxt=v[cur][i];

        if (visited[nxt]) continue;
        dp[cur]+=recur(nxt);
    }

    return dp[cur];
}

int main() {

    cin >> n >> r >> q;
    for (int i = 0; i < n-1; i++){
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    for (int i = 1; i<=n; i++) dp[i]=1;

    recur(r);

    for (int i = 0; i<q; i++){
        cin >> u;
        cout << dp[u] << '\n';
    }

    return 0;
}