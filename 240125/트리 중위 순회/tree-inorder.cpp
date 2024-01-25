#include <iostream>
using namespace std;

int tree[2<<10+1], idx=1, k, arr[2<<10+1],n;

void recur(int cur){
    if (cur>n) return;
    recur(cur*2);
    tree[cur]=arr[idx++];
    recur(cur*2+1);
}

int main() {
    cin >> k;
    n=(1<<k)-1;
    for (int i = 1; i<=n; i++) cin >> arr[i];
    recur(1);
    for (int i = 1; i<=k; i++){
        for (int j = (1<<(i-1)); j<=(1<<i)-1; j++) cout << tree[j] << ' ';
        cout << '\n';
    }
    return 0;
}