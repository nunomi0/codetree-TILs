#include <iostream>
using namespace std;

int n, a[110], ans=999999999;

int main() {
    cin >> n;
    for (int i = 1; i<=n; i++) cin >> a[i];
    for (int i = 1; i<=n; i++){
        int cnt=0;
        for (int j = 1; j<=n; j++) cnt+=abs(i-j)*a[j];
        ans=min(ans,cnt);
    }
    cout << ans;
    return 0;
}