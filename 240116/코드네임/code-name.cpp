#include <iostream>
#include <algorithm>
using namespace std;

class User{
    public: 
        char codename;
        int score;
        User(char codename, int score){ // 인자를 받는 생성자
            this->codename = codename;
            this->score = score;
        }
        User(){} // 기본생성자 : 클래스의 객체가 생성될 때 호출되는 특별한 종류의 생성자
};

User users[5];

char c;
int s;

bool comp(User a, User b){
    if (a.score<b.score) return 1;
    return 0;
}

int main() {
    for (int i = 0; i<5; i++){
        cin >> c >> s;
        users[i]=User(c,s);
    }
    sort(users,users+5, comp);
    cout << users[0].codename << ' ' << users[0].score;
    return 0;
}