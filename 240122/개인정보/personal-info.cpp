#include <iostream>
#include <algorithm>
using namespace std;

class Student {
    public: 
        string name;
        int h;
        double w;
        Student(string name, int h, double w){
            this->name=name;
            this->h=h;
            this->w=w;
        }
        Student(){};
};

bool cmp1(Student a, Student b){
    return a.name<b.name;
}

bool cmp2(Student a, Student b){
    return a.h>b.h;
}

int n,h;
double w;
string name;
Student student[10];

int main() {

    for (int i = 0; i<5; i++){
        cin >> name >> h >> w;
        student[i]=Student(name,h,w);
    }

    cout << fixed;
    cout.precision(1);
    
    cout << "name\n";
    sort(student,student+5,cmp1);
    for (int i = 0; i<5; i++){
        cout << student[i].name << ' ' << student[i].h << ' ' << student[i].w << '\n';
    }

    cout << '\n' << "height\n";
    sort(student,student+5,cmp2);

    for (int i = 0; i<5; i++){
        cout << student[i].name << ' ' << student[i].h << ' ' << student[i].w << '\n';
    }

    return 0;
}