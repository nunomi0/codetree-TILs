#include <iostream>
#include <vector>
using namespace std;

int n,x,r,ans=0,visited[60];
vector<int> v[60];

void traverse(int cur){
    if (cur==x) return;
    visited[cur]=1;
    if (v[cur].size()==0) ans++;
    else {
        for (int i = 0; i<v[cur].size(); i++){
            int nxt=v[cur][i];
            if (nxt==x || visited[nxt]) continue;
            traverse(nxt);
        }
    }
}

int main() {
    cin >> n;
    for (int i = 0; i<n; i++){
        cin >> x;
        if (x==-1) r=i;
        else v[x].push_back(i);
    }
    cin >> x;
    
    traverse(r);
    cout << ans;
    return 0;
}