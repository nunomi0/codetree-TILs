#include <iostream>
#include <string>
using namespace std;

string id;
int level;


class user{
    public:
        string id;
        int level;
        user(string id, int level){
            this->id = id;
            this->level = level;
        }
};

int main() {
    user us1=user("codetree",10);

    cin >> id >> level;
    user us2=user(id,level);

    cout << "user " << us1.id << " lv " << us1.level << '\n';
    cout << "user " << us2.id << " lv " << us2.level << '\n';

    return 0;
}