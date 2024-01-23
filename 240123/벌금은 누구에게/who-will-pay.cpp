#include <iostream>
using namespace std;

int n,m,k,x,arr[110],ans=-1;

int main() {
    cin >> n >> m >> k;
    for (int i = 0; i<m; i++){
        cin >> x;
        if (++arr[x]>=k && ans==-1) ans=x;
    }
    cout << ans;
    return 0;
}