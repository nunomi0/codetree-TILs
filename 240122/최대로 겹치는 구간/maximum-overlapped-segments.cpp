#include <iostream>
using namespace std;

int n,x1,x2,arr[210];

int main() {
    cin >> n;
    for (int i = 0; i<n; i++){
        cin >> x1 >> x2;
        for (int j = x1+100; j<x2+100; j++){
            arr[j]++;
        }
    }
    int ans=0;
    for (int i = 0; i<=200; i++){
        ans=max(ans,arr[i]);
    }
    cout << ans;
    return 0;
}