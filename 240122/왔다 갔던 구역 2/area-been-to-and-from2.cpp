#include <iostream>
using namespace std;


int n,x,arr[2010], idx=1000;
char s;

int main() {
    cin >> n;
    arr[idx]++;
    for (int i = 0; i<n; i++){
        cin >> x >> s;
        if (s=='R'){
            for (int j = 0; j<x; j++){
                idx++;
                arr[idx]++;
            }
        }
        else {
            for (int j = 0; j<x; j++){
                idx--;
                arr[idx]++;
            }
        }
    }

    int ans=0;
    for (int i = 0; i<=1000; i++) if (arr[i]>=2) ans++;
    cout << ans;

    return 0;
}