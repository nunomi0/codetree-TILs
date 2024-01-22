#include <iostream>
#include <algorithm>
using namespace std;

class Student{
    public: 
        string name;
        int height;
        int weight;
        Student(string name, int height, int weight){
            this->name=name;
            this->height=height;
            this->weight=weight;
        }
        Student(){};
};

bool cmp(Student a, Student b){
    if (a.height!=b.height) return a.height<b.height;
    return a.weight>b.weight;
}

int n;
string name;
int height, weight;
Student student[20];

int main() {
    cin >> n;
    for (int i = 0; i<n; i++){
        cin >> name >> height >> weight;
        student[i]=Student(name,height,weight);
    }
    sort(student,student+n,cmp);
    for (int i = 0; i<n; i++){
        cout << student[i].name << ' ' << student[i].height << ' ' << student[i].weight << '\n';
    }
    return 0;
}