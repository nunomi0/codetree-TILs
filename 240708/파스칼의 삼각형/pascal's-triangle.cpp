#include <iostream>
using namespace std;

int n, arr[20][20];


int main() {

    cin >> n;

    for (int i = 0; i<n; i++){
        for (int j = 0; j<=i; j++){
            if (i==0 || i==j) arr[i][j]=1;
            else arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
        }
    }

    for (int i = 0; i<n; i++){
        for (int j = 0; j<=i; j++){
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}