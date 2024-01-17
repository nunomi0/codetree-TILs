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
    int a_year = stoi(a.date.substr(0,4));
    int a_month = stoi(a.date.substr(5,2));
    int a_date = stoi(a.date.substr(8,2));
    int b_year = stoi(b.date.substr(0,4));
    int b_month = stoi(b.date.substr(5,2));
    int b_date = stoi(b.date.substr(8,2));
    if (a_year<b_year) return 1;
    else if (a_year==b_year){
        if (a_month<b_month) return 1;
        else if (a_month==b_month) {
            if (a_date<b_date) return 1;
        }
    }
    return 0;
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