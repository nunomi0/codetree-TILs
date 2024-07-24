#include <iostream>
using namespace std;

int n,dp[1010];

int main() {

    cin >> n;

    dp[0]=1;
    dp[1]=2;
    dp[2]=7;

    for (int i = 3; i<=n; i++){
        dp[i]=(dp[i-1]*2+dp[i-2]*7)%1000000007;
    }
    
    cout << dp[n];

    return 0;
}