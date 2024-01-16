#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n,k;
vector<string> v;
string t,s,arr[110];

int main() {
    cin >> n >> k >> t;
    for (int i = 0; i<n; i++){
        cin >> s;
        bool check=1;
        for (int j = 0; j<t.length(); j++){
            if (s[j]!=t[j]) {
                check=0;
                break;
            }
        }
        if (check) v.push_back(s);
    }
    sort(v.begin(), v.end());
    cout << v[k-1];
    return 0;
}