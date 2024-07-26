#include <iostream>
using namespace std;

int n, dp[20];

int main() {
    cin >> n;

    dp[0]=1;
    dp[1]=1;

    for (int i = 2; i<=n; i++){
        int cnt=0;
        for (int j = 0; j<i; j++) cnt+=dp[j]*dp[i-j-1];
        dp[i]=cnt;
    }
    cout << dp[n];
}