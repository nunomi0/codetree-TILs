#include <iostream>
#include <vector>
using namespace std;

vector<int> v[100010];
int arr[100010],n,t,a,p;


int recur(int cur){
    int cnt=0;
    for (int i = 0; i<v[cur].size(); i++){
        int nxt=v[cur][i];
        arr[nxt]=recur(nxt);
        cnt+=max(0,arr[nxt]);
    }
    return arr[cur]+cnt;
}


int main() {
    cin >> n;
    for (int i = 2; i<=n; i++){
        cin >> t >> a >> p;
        if (t==0) t=-1;
        v[p].push_back(i);
        arr[i]=a*t;
    }
    cout << recur(1);
    return 0;
}