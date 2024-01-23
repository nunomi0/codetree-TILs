#include <iostream>
#include <map>
using namespace std;

int n,m,at[1010],bt[1010],cnt=0,ai=0,bi=0,al=0,bl=0,ans=-1;
char ad[1010],bd[1010];
map<char,int> d={{'L',-1},{'R',1}};

int main() {
    cin >> n >> m;
    
    for (int i = 0; i<n; i++) cin >> ad[i] >> at[i];
    for (int i = 0; i<m; i++) cin >> bd[i] >> bt[i];

    while (true){

        if (ai>n || bi>m) break;

        cnt++;

        at[ai]--;
        al+=d[ad[ai]];
        if (at[ai]==0) ai++;

        bt[bi]--;
        bl+=d[bd[bi]];
        if (bt[bi]==0) bi++;

        if (al==bl) {
            ans=cnt;
            break;
        }
    }

    cout << ans;
    return 0;
}