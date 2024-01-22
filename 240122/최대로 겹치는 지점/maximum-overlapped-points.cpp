#include <iostream>
using namespace std;


int n,x1,x2,arr[110];

int main() {
    cin >> n;
    for (int i = 0; i<n; i++){
        cin >> x1 >> x2;
        for (int j = x1; j<=x2; j++) arr[j]++;
    }
    int ans=0;
    for (int i = 0; i<=100; i++){
        ans=max(ans,arr[i]);
    }
    cout << ans;

    return 0;
}