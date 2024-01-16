#include <iostream>
#include <algorithm>
using namespace std;

int n, arr[1010], ans=0;

int main() {
    cin >> n;
    for (int i = 0; i<2*n; i++){
        cin >> arr[i];
    }
    sort(arr,arr+n,greater<int>());
    for (int i = 0; i<n; i++){
        ans+=arr[i];
    }
    cout << ans;
    return 0;
}