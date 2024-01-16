#include <iostream>
using namespace std;


class Bomb {
    public:
        string code;
        char color;
        int second;
        Bomb(string code, char color, int second){
            this->code=code;
            this->color=color;
            this->second=second;
        }
};

string input_code;
char input_color;
int input_second;

int main() {
    cin >> input_code >> input_color >> input_second;
    Bomb bomb = Bomb(input_code,input_color,input_second);
    cout << "code : " << bomb.code << "\ncolor : " << bomb.color << "\nsecond : " << bomb.second;
    return 0;
}