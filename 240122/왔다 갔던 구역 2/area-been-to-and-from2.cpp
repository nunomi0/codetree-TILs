#include <iostream>
using namespace std;


int n,x,arr[2010],idx=1000,d;
char s;

int main() {
    cin >> n;
    for (int i = 0; i<n; i++){
        cin >> x >> s;
        if (s=='R') for (int j = 0; j<x; j++) arr[++idx]++;
        else for (int j = 0; j<x; j++) arr[idx--]++;
    }

    int ans=0;
    for (int i = 0; i<=2000; i++) if (arr[i]>=2) ans++;
    cout << ans;

    return 0;
}