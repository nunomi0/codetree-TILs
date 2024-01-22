#include <iostream>
#include <algorithm>
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

    auto iter = find(days, days+7, day);
    int idx = distance(days, iter);
    
    cout << cnt/7+(cnt>=0 && cnt%7>=idx);

    return 0;
}