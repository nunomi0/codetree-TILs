#include <iostream>
using namespace std;

int n,x,y,arr[310][310],ans=0;


int main() {
    cin >> n;
    for (int i = 0; i<n; i++){
        cin >> x >> y;
        for (int i = 0; i<8; i++){
            for (int j = 0; j<8; j++){
                arr[x+i+100][y+j+100]++;
            }
        }
    }

    for (int i = 0; i<=300; i++){
        for (int j = 0; j<=300; j++){
            if (arr[i][j]) ans++;
        }
    }

    cout << ans;
    return 0;
}