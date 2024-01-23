#include <iostream>
#include <map>
using namespace std;

int n,m,t,a[1000010],b[1000010],at=1,bt=1,ans=-1;
char c;
map<char,int> d={{'L',-1},{'R',1}};


int main(){
    cin >> n >> m;
    for (int i = 0; i<n; i++){
        cin >> c >> t;
        while (t--) a[at++]=a[at-1]+d[c];
    }
    for (int j = 0; j<m; j++){
        cin >> c >> t;
        while (t--) b[bt++]=b[bt-1]+d[c];
    }

    for (int i = 1; i<min(at,bt); i++){
        if (a[i]==b[i]) {
            ans=i;
            break;
        }
    }

    cout << ans;
    return 0;
}