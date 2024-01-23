#include <iostream>
using namespace std;

int n,x1,y1,x2,y2,arr[210][210],ans=0;

int main() {
    cin >> n;
    for (int i = 0; i<n; i++){
        cin >> x1 >> y1 >> x2 >> y2;
        for (int x=x1; x<x2; x++){
            for (int y=y1; y<y2; y++){
                arr[x+100][y+100]++;
            }
        }
    }
    for (int i = 0; i<=200; i++){
        for (int j = 0; j<=200; j++){
            if (arr[i][j]) ans++;
        }
    }
    cout << ans;
    return 0;
}