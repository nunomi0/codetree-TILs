#include <iostream>
#include <algorithm>
using namespace std;

int n, a[110],b[110];


int main() {
    cin >> n;
    for (int i = 0; i<n; i++) cin >> a[i];
    for (int i = 0; i<n; i++) cin >> b[i];
    sort(a,a+n);
    sort(b,b+n);
    string ans="Yes";
    for (int i = 0; i<n; i++) if (a[i]!=b[i]) ans="No";
    cout << ans;
    return 0;
}