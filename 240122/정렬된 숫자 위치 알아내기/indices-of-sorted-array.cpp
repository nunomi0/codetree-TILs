#include <iostream>
#include <algorithm>
using namespace std;


int n;
pair<int ,int> arr[1010];

int main() {
    cin >> n;
    for (int i = 0; i<n; i++){
        cin >> arr[i].first;
        arr[i].second=i+1;
    }
    sort(arr,arr+n);

    for (int i = 1; i<=n; i++){
        for (int j = 0; j<n; j++){
            if (arr[j].second==i) cout << j+1 << ' ';
        }
    }
    return 0;
}