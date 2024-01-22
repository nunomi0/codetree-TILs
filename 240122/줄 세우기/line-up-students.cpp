#include <iostream>
#include <algorithm>
using namespace std;


class Student {
    public:
        int h;
        int w;
        int num;
        Student(int h, int w, int num){
            this->h=h;
            this->w=w;
            this->num=num;
        }
        Student(){};
};

bool cmp(Student a, Student b){
    if (a.h!=b.h) return a.h>b.h;
    if (a.w!=b.w) return a.w>b.w;
    return a.num<b.num;
}

int n,h,w;
Student student[1010];

int main() {
    cin >> n;
    for (int i = 0; i<n; i++){
        cin >> h >> w;
        student[i]=Student(h,w,i);
    }
    sort(student,student+n,cmp);
    for (int i = 0; i<n; i++){
        cout << student[i].h << ' ' << student[i].w << ' ' << student[i].num+1 << '\n';
    }
    return 0;
}