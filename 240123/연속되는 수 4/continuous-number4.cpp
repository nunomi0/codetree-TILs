#include <iostream>
using namespace std;

int n,pre,cur,cnt=1,ans=1;

int main() {
    cin >> n;
    cin >> pre;
    for (int i = 1; i<n; i++){
        cin >> cur;
        if (pre<cur) cnt++;
        else cnt=1;
        pre=cur;
        ans=max(ans,cnt);
    }
    cout << ans;
    return 0;
}