#include <iostream>
using namespace std;

int m1,d1,m2,d2;
int days[20]={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};


int main() {

    cin >> m1 >> d1 >> m2 >> d2;

    int ans=0;
    for (int i = m1; i<=m2; i++){
        ans+=days[i];
    }
    ans-=d1-1+days[m2]-d2;
    cout << ans;
    return 0;
}