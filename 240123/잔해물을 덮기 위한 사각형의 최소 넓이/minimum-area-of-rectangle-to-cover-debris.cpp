#include <iostream>
using namespace std;

int a[2][4],arr[2010][2010];
int mnx=9999,mxx=0,mny=9999,mxy=0;

int main() {
    for (int i = 1; i<=2; i++){
        for (int j = 0; j<4; j++){
            cin >> a[i][j];
            for (int x = a[i][0]; x<a[i][2]; x++){
                for (int y = a[i][1]; y<a[i][3]; y++){
                    arr[x+1000][y+1000]=i;
                }
            }
        }
    }
    for (int i = 0; i<=2000; i++){ // x
        for (int j = 0; j<=2000; j++){ // y
            if (arr[i][j]==1){
                mnx=min(mnx,i);
                mxx=max(mxx,i);
                mny=min(mny,j);
                mxy=max(mxy,j);
            }
        }
    }
    if (mnx==9999) cout << 0;
    else cout << (mxx-mnx+1)*(mxy-mny+1);
    return 0;
}