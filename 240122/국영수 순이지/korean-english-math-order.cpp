#include <iostream>
#include <algorithm>
using namespace std;


class Student {
    public :
        string name;
        int kor;
        int eng;
        int math;
        Student(string name, int kor, int eng, int math){
            this->name=name;
            this->kor=kor;
            this->eng=eng;
            this->math=math;
        }
        Student(){}
};

bool cmp(Student a, Student b) {
    if (a.kor!=b.kor) return a.kor>b.kor;
    if (a.eng!=b.eng) return a.eng>b.eng;
    return a.math>b.math;
}

int n, kor, eng, math;
string name;
Student student[20];

int main() {
    cin >> n;
    for (int i = 0; i<n; i++){
        cin >> name >> kor >> eng >> math;
        student[i]=Student(name,kor,eng,math);
    }
    sort(student,student+n,cmp);
    for (int i = 0; i<n; i++){
        cout << student[i].name << ' ' << student[i].kor << ' ' << student[i].eng << ' ' << student[i].math << '\n';
    }
    return 0;
}