#include <iostream>
#include <vector>
using namespace std;

int n,m,x,r,a,b,dp[100010];
vector<int> v[100010];

void recur(int cur, int cnt){
    dp[cur]+=cnt;
    for (int i = 0; i<v[cur].size(); i++){
        int nxt=v[cur][i];
        recur(nxt,dp[cur]);
    }
}

int main() {
    cin >> n >> m;
    for (int i = 1; i<=n; i++) {
        cin >> x;
        if (x==-1) r=i;
        else v[x].push_back(i);
    }

    for (int i = 0; i<m; i++){
        cin >> a >> b;
        dp[a]+=b;
    }

    recur(r,0);
    
    for (int i = 1; i<=n; i++) cout << dp[i] << ' ';

    return 0;
}