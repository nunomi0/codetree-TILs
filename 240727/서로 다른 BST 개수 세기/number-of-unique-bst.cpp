#include <iostream>
using namespace std;

// 항상 꼬리에 붙인다

int n, dp[20];

int main() {

    cin >> n;

    dp[0]=1;
    dp[1]=1;
    dp[2]=2;
    dp[3]=5;

    for (int i = 4; i<=n; i++){
        dp[i]=dp[i-1]/5*4*2+dp[i-1]/5*4;
    }
    cout << dp[n];
    return 0;
}