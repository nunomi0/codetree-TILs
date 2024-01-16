#include <iostream>
#include <string>
using namespace std;

// class 이용
string s_code;
char m_point;
int t_time;

class spy{
    public:
        string secret_code;
        char meeting_point;
        int time;
        spy(string secret_code, char meeting_point, int time){
            this->secret_code = secret_code;
            this->meeting_point = meeting_point;
            this->time= time;
        }
};


int main() {
    cin >> s_code >> m_point >> t_time;
    spy s = spy(s_code, m_point, t_time);
    cout << "secret code : " << s.secret_code << endl;
    cout << "meeting point : " << s.meeting_point << endl;
    cout << "time : " << s.time << endl;

    return 0;
}