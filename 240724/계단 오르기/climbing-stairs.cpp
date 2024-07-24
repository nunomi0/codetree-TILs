#include <iostream>
using namespace std;

int n, dp[1010];

int main() {

    cin >> n;

    for (int i = 0 ; i<n; i++){
        dp[i+2]++;
        dp[i+3]++;
    }
    cout << dp[n]%10007;
    return 0;
}