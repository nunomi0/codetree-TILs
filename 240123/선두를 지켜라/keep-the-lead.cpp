#include <iostream>
using namespace std;

int n,m,v,t,a[1000010],b[1000010],at=1,bt=1,leader=0,ans=0;

int main(){

    cin >> n >> m;
    for (int i = 0; i<n; i++){
        cin >> v >> t;
        while (t--) a[at++]=a[at-1]+v;
    }

    for (int i = 0; i<m; i++){
        cin >> v >> t;
        while (t--) b[bt++]=b[bt-1]+v;
    }

    for (int i = 1; i<min(at,bt); i++){
        if (a[i]>b[i]){
            if (leader==2) ans++;
            leader=1;
        }
        
        else if (a[i]<b[i]){
            if (leader==1) ans++;
            leader=2;
        }
    }
    cout << ans;
    return 0;
}