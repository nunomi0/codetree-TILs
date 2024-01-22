#include <iostream>
#include <algorithm>
using namespace std;


class Student {
    public :
        string name;
        int score[3];
        Student(string name, int score[3]){
            this->name=name;
            for (int i = 0; i<3; i++){
                this->score[i]=score[i];
            }
        }
        Student(){}
};

bool cmp(Student a, Student b) {
    for (int i = 0; i<3; i++){
        if (a.score[i]!=b.score[i]) return a.score[i]>b.score[i];
    }
}

int n,score[3];
string name;
Student student[20];

int main() {
    cin >> n;
    for (int i = 0; i<n; i++){
        cin >> name;
        for (int j = 0; j<3; j++){
            cin >> score[j];
        }
        student[i]=Student(name,score);
    }

    sort(student,student+n,cmp);

    for (int i = 0; i<n; i++){
        cout << student[i].name << ' ';
        for (int j = 0; j<3; j++){
            cout << student[i].score[j] << ' ';
        }
        cout << '\n';
    }
    
    return 0;
}