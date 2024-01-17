#include <iostream>
#include <algorithm>
using namespace std;

class Person {
    public:
        string name;
        int height;
        int weight;
        Person(string name, int height, int weight){
            this->name = name;
            this->height = height;
            this->weight = weight;
        }
        Person(){}
};

int n;
string input_name;
int input_height, input_weight;
Person p[20];

bool cmp(Person a, Person b){
    return a.height < b.height;
}

int main() {
    cin >> n;
    for (int i = 0; i<n; i++){
        cin >> input_name >> input_height >> input_weight;
        p[i]=Person(input_name,input_height,input_weight);
    }
    sort(p,p+n,cmp);
    for (int i = 0; i<n; i++){
        cout << p[i].name << ' ' << p[i].height << ' ' << p[i].weight << '\n';
    }
    return 0;
}