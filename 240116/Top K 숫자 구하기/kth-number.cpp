#include <iostream>
#include <algorithm>
using namespace std;

int n,k,arr[1010];


int main() {
    cin >> n >> k;
    for (int i = 0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    cout << arr[k-1];
    return 0;
}