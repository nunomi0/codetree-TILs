#include <iostream>
using namespace std;

int n, pre, cur, cnt=1, ans=0;

int main() {
    cin >> n;
    for (int i = 0; i<n; i++){
        cin >> cur;
        if (i==0) pre=cur;
        else {
            if (cur*pre>0) cnt++;
            else {
                pre=cur;
                cnt=1;
            }
        }
        ans=max(ans,cnt);
    }
    cout << ans;
    return 0;
}