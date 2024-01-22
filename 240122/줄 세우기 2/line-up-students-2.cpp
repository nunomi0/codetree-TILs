#include <iostream>
#include <algorithm>
using namespace std;

int n,h,w;
pair<pair<int,int>,int> s[1010]; // h w i

bool cmp(pair<pair<int,int>,int> a, pair<pair<int,int>,int> b){
    if (a.first.first!=b.first.first) return a.first.first<b.first.first;
    return a.first.second>b.first.second;
}

int main() {
    cin >> n;
    for (int i = 0; i<n; i++){
        cin >> h >> w;
        s[i]={{h,w},i+1};
    }
    sort(s,s+n,cmp);
    for (int i = 0; i<n; i++){
        cout << s[i].first.first << ' ' << s[i].first.second << ' ' << s[i].second << '\n';
    }
    return 0;
}