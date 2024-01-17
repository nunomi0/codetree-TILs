#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


class Data {
    public:
        string date, day, weather;
        Data(string date, string day, string weather){
            this->date=date;
            this->day=day;
            this->weather=weather;
        }
        Data(){}
};

int n;
string input_date,input_day,input_weather;
Data d[110];

bool comp(Data a, Data b){
    if (a.date<b.date) return 1;
    else return 0;
}

int main() {
    cin >> n;
    for (int i = 0; i<n; i++){
        cin >> input_date >> input_day >> input_weather;
        d[i]=Data(input_date,input_day,input_weather);
    }
    sort(d,d+n,comp);
    for (int i = 0; i<n; i++){
        if (d[i].weather=="Rain") {
            cout << d[i].date << ' ' << d[i].day << ' ' << d[i].weather;
            break;
        }
    }
    return 0;
}