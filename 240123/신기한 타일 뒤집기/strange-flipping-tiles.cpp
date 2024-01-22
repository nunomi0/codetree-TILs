#include <iostream>
using namespace std;

int n,x,arr[200010],cur=100000, ans[3];
char c;


int main() {
    cin >> n;
    for (int i = 0; i<n; i++){
        cin >> x >> c;
        if (c=='L'){
            while (x--){
                arr[cur]=1;
                if (x) cur--;
            }
        }
        else {
            while (x--){
                arr[cur]=2;
                if (x) cur++;
            }
        }
    }

    for (int i = 0; i<200000; i++) ans[arr[i]]++;
    for (int i = 1; i<=2; i++) cout << ans[i] << ' ';

    return 0;
}