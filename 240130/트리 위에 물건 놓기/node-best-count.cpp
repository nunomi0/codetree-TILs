#include <iostream>
#include <vector>
using namespace std;

int n,a,b,dp[100010][2],visited[100010];
vector<int> v[100010];


void recur(int cur){
    visited[cur]=1;

    if (v[cur].size()==1 && visited[v[cur][0]]) {
        for (int j = 0; j<2; j++){
            dp[cur][j]=0;
        }
    }

    int mx[2]={dp[cur][0],dp[cur][1]};
    int mn[2]={dp[cur][0],dp[cur][1]};

    for (int i = 0; i<v[cur].size(); i++){
        int nxt=v[cur][i];
        if (visited[nxt]) continue;
        
        recur(nxt);
        for (int j = 0; j<2; j++) {
            mx[j]=max(mx[j],dp[nxt][j]);
            mn[j]=min(mn[j],dp[nxt][j]);
        }        
    }
    dp[cur][0]=max(mx[0],mn[1]);
    dp[cur][1]=min(mn[0],mn[1])+1;
}

int main() {

    cin >> n;
    for (int i = 0; i<n-1; i++){
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    for (int i = 0; i<=n; i++) {
        for (int j = 0; j<2; j++){
            dp[i][j]=999999999;
        }
    }

    recur(1);

    cout << min(dp[1][0],dp[1][1]);
    return 0;
}