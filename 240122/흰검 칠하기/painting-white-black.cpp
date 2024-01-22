#include <iostream>
using namespace std;

// w = 1, b = 2, g = 3
int n,x,arr[20010],cur=10000,ans[4],w[20010],b[20010];
char c;

int main() {
    cin >> n;
    for (int i = 0; i<n; i++){
        cin >> x >> c;
        if (c=='L'){
            while (x--){
                arr[cur]=1;
                w[cur]++;
                if (x) cur--;
            }
        }
        else { // s='R'
            while (x--){
                arr[cur]=2;
                b[cur]++;
                if (x) cur++;
            }
        }
    }

    for (int i = 0; i<20000; i++) {
        if (b[i]>=2 && w[i]>=2) ans[3]++;
        else ans[arr[i]]++;
    }
    for (int i = 1; i<=3; i++) cout << ans[i] << ' ';

    return 0;
}