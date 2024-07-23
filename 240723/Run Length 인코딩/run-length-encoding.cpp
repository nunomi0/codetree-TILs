#include <iostream>
#include <string>
using namespace std;

string s,ans="";
int cnt=1;
int l=0;

int main() {
    cin >> s;
    if (s.length()==1) cout << 1 << '\n' << s[0] << 1;

    for (int i = 1; i<s.length(); i++){
        if (s[i]==s[i-1]) cnt++;
        else {
            ans+=s[i-1]+to_string(cnt);
            l+=2;
            cnt=1;
        }
    }
    ans+=s[s.length()-1]+to_string(cnt);
    l+=2;
    
    cout << l << '\n' << ans;

    return 0;
}