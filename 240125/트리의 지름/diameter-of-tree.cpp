#include <iostream>
#include <vector>
using namespace std;

int n,a,b,c,visited[100010],tmp=0;
long long mx=0;
vector<pair<int,int>> v[100010];

void recur(int cur, long long cnt){
    visited[cur]=1;
    if (cnt>mx){
        mx=cnt;
        tmp=cur;
    }
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
    recur(tmp,0);
    cout << mx;

    return 0;
}