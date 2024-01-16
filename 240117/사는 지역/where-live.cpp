#include <iostream>
#include <algorithm>
using namespace std;

class User {
    public:
        string name,address,area;
        User(string name,string address, string area){
            this->name=name;
            this->address=address;
            this->area=area;
        }
        User(){}
};

int n;
string input_name, input_address, input_area;
User users[20];

bool comp(User a, User b){
    if (a.name>b.name) return 1;
    return 0;
}

int main() {
    cin >> n;
    for (int i = 0; i<n; i++){
        cin >> input_name >> input_address >> input_area;
        users[i]=User(input_name,input_address,input_area);
    }
    sort(users,users+n,comp);
    cout << "name " << users[0].name << "\naddr " << users[0].address << "\ncity " << users[0].area;
    return 0;
}