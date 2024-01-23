#include <iostream>
using namespace std;

int n,t,x,cnt=0,ans=0;

int main() {
    cin >> n >> t;
    for (int i = 0; i<n; i++){
        cin >> x;
        if (x>t) cnt++;
        else cnt=0;
        ans=max(ans,cnt);
    }
    cout << ans;
    return 0;
}