#include <iostream>
#include <algorithm>
using namespace std;

int n, arr[2010], ans=0;

// 합의 최댓값이 최소가 되도록 -> 최댓값 출력
// 그룹 내 숫자 개수 무조건 2개

int main() {
    cin >> n;
    for (int i = 0; i<2*n; i++){
        cin >> arr[i];
    }
    sort(arr,arr+2*n);

    for (int i = 0; i<n; i++){
        ans=max(ans, arr[i]+arr[2*n-1-i]);
    }
    cout << ans;
    return 0;
}