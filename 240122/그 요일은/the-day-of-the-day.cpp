#include <iostream>
using namespace std;


int m1,m2,d1,d2;
int months[20]={0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string days[7]={"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
string day;

int main() {
    cin >> m1 >> d1 >> m2 >> d2 >> day;

    int cnt=0;
    for (int i = m1; i<m2; i++){
        cnt+=months[i];
    }
    cnt+=-d1+d2;

    int day_cnt;
    for (int i = 0; i<7; i++){
        if (day==days[i]) {
            day_cnt=i;
        }
    }

    int ans=cnt/7;
    if (cnt>=0 && cnt%7>=day_cnt) ans++;
    cout << ans;

    return 0;
}