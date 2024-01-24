#include <iostream>
#include <map>
using namespace std;

int n,m,t,a[2000010],b[2000010],at=1,bt=1,ans=0;
char c;
map<char,int> d={{'L',-1},{'R',1}};

int main() {
    cin >> n >> m;
    for (int i = 0; i<n; i++){
        cin >> t >> c;
        while (t--) a[at++]=a[at-1]+d[c];
    }
    for (int i = 0; i<m; i++){
        cin >> t >> c;
        while (t--) b[bt++]=b[bt-1]+d[c];
    }

    for (int i = at; i<bt; i++) a[at++]=a[at-1];
    for (int i = bt; i<at; i++) b[bt++]=b[bt-1];

    for (int i = 1; i<max(at,bt); i++){
        //cout << i << ' ' << a[i] << ' ' << b[i] << ' ' << ans << '\n';
        if (a[i]==b[i] && a[i-1]!=b[i-1]) ans++;
    }

    cout << ans;
    return 0;
}