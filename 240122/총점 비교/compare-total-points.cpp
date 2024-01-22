#include <iostream>
#include <algorithm>
using namespace std;


class Student{
    public:
        string name;
        int score[3];
        Student(string name, int score[3]){
            this->name=name;
            for (int i = 0; i<3; i++){
                this->score[i]=score[i];
            }
        }
        Student(){};
};

int n;
int score[3];
string name;
Student student[20];

bool cmp(Student a, Student b){
    int as=0, bs=0;
    for (int i = 0; i<3; i++){
        as+=a.score[i];
        bs+=b.score[i];
    }
    return as<bs;
}

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