#include <iostream>
using namespace std;

int n, dp[1010];

int main() {

    cin >> n;
    dp[0]=1;
    dp[2]=1;
    for (int i = 3; i <n; i++){
        cout << i << ' ' << dp[i] << '\n';
        dp[i]=dp[i-2]+dp[i-3];
    }
    cout << dp[n]%10007;
    return 0;
}