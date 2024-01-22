#include <iostream>
using namespace std;

int n,k,arr[110],s,e;


int main() {
    cin >> n >> k;
    for (int i = 0; i<k; i++){
        cin >> s >> e;
        for (int j = s; j<=e; j++){
            arr[j]++;
        }
    }

    int ans=0;
    for (int i = 1; i<=n; i++){
        ans=max(ans,arr[i]);
    }
    cout << ans;
    return 0;
}