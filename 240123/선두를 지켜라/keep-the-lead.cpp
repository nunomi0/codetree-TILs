#include <iostream>
using namespace std;

int n, m, v, t, a[1000010], b[1000010], at = 0, bt = 0, ans = 0;
// a가 선두로 시작할 경우 (a[1]>b[1]인 경우) : ans%2==0 (a[1]<b[1])이면 a가 선두, ans%2==1 (a[1]>b[1])이면 b가 선두
// b가 선두로 시작할 경우 (a[1]<b[1]인 경우) : ans%2==0 (a[1]>b[1])이면 b가 선두, ans%2==1 (a[1]<b[1])이면 a가 선두

// if ((a[1]>b[1] && ans%2==0) && a[i]<b[i]) ans++;
// if ((a가 선두로 시작해서 이전에 a가 선두였는데) && (현재 b가 선두로 바뀐 경우)) ans++;

// if ((a[1]>b[1] && ans%2==1) && a[i]>b[i]) ans++;
// if ((a가 선두로 시작해서 이전에 b가 선두였는데) && (현재 a가 선두로 바뀐 경우)) ans++;

// if ((a[1]<b[1] && ans%2==0) && a[i]>b[i]) ans++;
// if ((b가 선두로 시작해서 이전에 b가 선두였는데) && (현재 a가 선두로 바뀐 경우)) ans++;

// if ((a[1]<b[1] && ans%2==1) && a[i]<b[i]) ans++;
// if ((b가 선두로 시작해서 이전에 a가 선두였는데) && (현재 b가 선두로 바뀐 경우)) ans++;


// if (ans%2==(a[1]>b[1]) && a[i]>b[i]) ans++;
// if (a가 선두로 시작해서 이전까지 b가 선두였는데 현재 a로 선두가 바뀐 경우)


// if (x가 선두로 시작해서 이전까지 -x가 선두였는데 현재 x로 선두가 바뀐 경우)
// if (x가 선두로 시작해서 이전까지 x가 선두였는데 현재 -x로 선두가 바뀐 경우)


int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> v >> t;
        while (t--) a[at++] = a[at - 1] + v;
    }

    for (int i = 0; i < m; i++) {
        cin >> v >> t;
        while (t--) b[bt++] = b[bt - 1] + v;
    }

    for (int i = 2; i <= 1000; i++) {
        if ((a[1] > b[1] && ans % 2 == 0) && a[i] < b[i]) ans++;
        //if ((a가 선두로 시작해서 이전에 a가 선두였는데) && (현재 b가 선두로 바뀐 경우)) ans++;

        else if ((a[1] > b[1] && ans % 2 == 1) && a[i] > b[i]) ans++;
        //if ((a가 선두로 시작해서 이전에 b가 선두였는데) && (현재 a가 선두로 바뀐 경우)) ans++;

        else if ((a[1] < b[1] && ans % 2 == 0) && a[i] > b[i]) ans++;
        //if ((b가 선두로 시작해서 이전에 b가 선두였는데) && (현재 a가 선두로 바뀐 경우)) ans++;

        else if ((a[1] < b[1] && ans % 2 == 1) && a[i] < b[i]) ans++;
        //if ((b가 선두로 시작해서 이전에 a가 선두였는데) && (현재 b가 선두로 바뀐 경우)) ans++;
    }
    cout << ans;
    return 0;
}