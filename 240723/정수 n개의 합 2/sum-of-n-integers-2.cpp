#include <iostream>
using namespace std;

int n, k, arr[100010], mx=-999999999;

int main() {

    cin >> n >> k;
    for (int i = 1; i<=n; i++){
        cin >> arr[i];
        arr[i]+=arr[i-1];
    }
    for (int i = 0; i<n-k; i++){
        mx=max(mx, arr[i+k]-arr[i]);
    }

    cout << mx;

    return 0;
}