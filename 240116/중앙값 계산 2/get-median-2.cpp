#include <iostream>
#include <algorithm>
using namespace std;

int n, arr[110];


int main() {
    cin >> n;
    for (int i = 0; i<n; i++){
        cin >> arr[i];
        sort(arr,arr+i+1);
        if (i%2==0){
            cout << arr[i/2] << ' ';
        }
    }
    return 0;
}