#include <iostream>
#include <vector>
using namespace std;

int n,a,b,arr[10010], visited[10010],dp[10010][2], ans=0;
vector<int> v[10010];

// 최대한 많이 고를 수록 이득

// cur의 par이 checked 이면 cur은 무조건 !checked
// cur의 par이 !checked 이고 par의 par이 checked이면 cur은 checked or !checked (둘 다 가능)
// cur의 par이 !checked 이고 par의 par이 !chekced이면 cur은 무조건 checked

// par이 없는 경우 -> 임의의 par값 만들어 표시

// cur에 대해서 chd->chd 로 max 값 갱신 두 번
// chd가 없는 경우 ans에 max 값 갱신


void recur(int cur){
    visited[cur]=1;

    for (int i = 0; i<v[cur].size(); i++){
        int nxt=v[cur][i];
        if (visited[nxt]) continue;

        recur(nxt);
        dp[cur][0]+=max(dp[nxt][0],dp[nxt][1]);
        dp[cur][1]+=dp[nxt][0];
    }
}

int main() {
    cin >> n;
    for (int i = 1; i<=n; i++) cin >> dp[i][1];

    for (int i = 0; i<n-1; i++){
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    
    recur(1);

    cout << max(dp[1][0],dp[1][1]);

    return 0;
}