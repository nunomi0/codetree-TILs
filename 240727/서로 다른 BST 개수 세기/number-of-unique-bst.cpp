#include <iostream>
using namespace std;

int n, dp[20];

int cal(int t){
    if (dp[t]!=-1) return dp[t];
    if (t<=1) return 1;
    int cnt=0;
    for (int i = 0 ; i<n; i++){
        cnt+=cal(i)*cal(n-i-1);
    }
    return dp[t]=cnt;
}

int main() {

    cin >> n;
    for (int i = 0; i<20; i++) dp[i]=-1;
    cout << cal(n);
    return 0;
}