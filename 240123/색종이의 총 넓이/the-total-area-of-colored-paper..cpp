#include <iostream>
using namespace std;

int n,x,y,arr[210][210],ans=0;


int main() {
    cin >> n;
    for (int i = 0; i<n; i++){
        cin >> x >> y;
        for (int i = 0; i<8; i++){
            for (int j = 0; j<8; j++){
                arr[x+i+8][y+j+8]++;
            }
        }
    }

    for (int i = 0; i<=200; i++){
        for (int j = 0; j<=200; j++){
            ans+=(bool)arr[i][j];
        }
    }

    cout << ans;
    return 0;
}