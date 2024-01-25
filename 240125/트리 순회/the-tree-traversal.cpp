#include <iostream>
#include <map>
using namespace std;

int n;
char root,l,r;
map<int,pair<int,int>> m;

void traverse(char cur, int type){
    if (cur=='.') return;
    if (type==1) cout << cur;
    traverse(m[cur].first,type);
    if (type==2) cout << cur;
    traverse(m[cur].second,type);
    if (type==3) cout << cur;
}

int main() {
    cin >> n;
    for (int i = 0; i<n; i++){
        cin >> root >> l >> r;
        m[root]={l,r};
    }

    for (int i = 1; i<=3; i++){
        traverse('A',i);
        cout << '\n';
    }

    return 0;
}