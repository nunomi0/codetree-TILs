#include <iostream>
#include <vector>
using namespace std;

int n,a,b,c,ans=0,visited[100010];
vector<pair<int,int>> v[100010];

void recur(int cur, int cnt){
    visited[cur]=1;
    ans=max(ans,cnt);
    for (int i = 0; i<v[cur].size(); i++){
        int nxt=v[cur][i].first;
        int nd=v[cur][i].second;
        if (visited[nxt]) continue;
        recur(nxt, cnt+nd);
    }
}

int main() {
    cin >> n;
    for (int i = 0; i<n-1; i++){
        cin >> a >> b >> c;
        v[a].push_back({b,c});
        v[b].push_back({a,c});
    }
    recur(1,0);
    cout << ans;

    return 0;
}