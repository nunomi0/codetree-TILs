#include <iostream>
using namespace std;

int m1,d1,m2,d2;
int months[20]={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string days[7]={"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};


int main() {

    cin >> m1 >> d1 >> m2 >> d2;

    bool check=0;

    if (m1>m2 || (m1==m2 && d1>d2)){
        check=1;
        swap(m1,m2);
        swap(d1,d2);
    }

    int cnt=0;
    for (int i = m1; i<=m2; i++){
        cnt+=months[i];
    }
    cnt-=d1+months[m2]-d2;
    
    cout << days[((1-2*check)*cnt+check*7*99999)%7];

    return 0;
}