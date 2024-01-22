#include <iostream>
#include <algorithm>
using namespace std;

class Dot {
    public:
        int x;
        int y;
        int num;
    Dot(int x, int y, int num){
        this->x=x;
        this->y=y;
        this->num=num;
    }
    Dot(){};
};

bool cmp(Dot a, Dot b){
    if (abs(a.x)+abs(a.y)!=abs(b.x)+abs(b.y)) return (abs(a.x)+abs(a.y)<abs(b.x)+abs(b.y));
    else return a.num<b.num;
}

int n,x,y;
Dot dots[1010];

int main() {
    cin >> n;
    for (int i = 0; i<n; i++){
        cin >> x >> y;
        dots[i]=Dot(x,y,i+1);
    }
    sort(dots,dots+n,cmp);
    for (int i = 0; i<n; i++){
        cout << dots[i].num << '\n';
    }
    return 0;
}