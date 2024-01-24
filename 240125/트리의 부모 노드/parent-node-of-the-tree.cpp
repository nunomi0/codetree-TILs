#include <iostream>
#include <vector>
using namespace std;

int n,a,b;
vector<int> v[100010];
int arr[100010];
int visited[100010];


void recur(int cur){
    visited[cur]=1;
    for (int i = 0; i<v[cur].size(); i++){
        int nxt= v[cur][i];
        if (!visited[nxt]) {
            if (arr[nxt]) continue;
            arr[nxt]=cur;
            recur(nxt);
        }
    }
}

int main() {

    cin >> n;

    for (int i = 0; i<n; i++){
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    recur(1);
    for (int i = 2; i<=n; i++){
        cout << arr[i] << '\n';
    }

    return 0;
}