#include <iostream>
using namespace std;

int n,x,mx=0,mx_cnt=0,cur_cnt,cur;


int main() {
    cin >> n;
    for (int i = 0; i<n; i++) {
        cin >> x;
        if (i==0) {
            cur=x;
            cur_cnt=1;
        }
        else {
            if (cur==x){
                cur_cnt++;
                if (cur_cnt>=mx_cnt) mx_cnt=cur_cnt;
            }
            else{
                cur=x;
                cur_cnt=1;
            }
        }
    }
    cout << mx_cnt;

    return 0;
}