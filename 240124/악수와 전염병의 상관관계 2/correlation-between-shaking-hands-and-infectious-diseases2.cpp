#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N,K,P,T,t,x,y,virus[110];
vector<pair<int,pair<int,int>>> handshake;


int main() {
    cin >> N >> K >> P >> T;

    virus[P]=K+1;

    for (int i = 0; i<T; i++){
        cin >> t >> x >> y;
        handshake.push_back({t,{x,y}});
    }
    sort(handshake.begin(),handshake.end());

    for (int i = 0; i<handshake.size(); i++){
        x=handshake[i].second.first;
        y=handshake[i].second.second;
        if (virus[x]>1 || virus[y]>1){
            if (virus[x]) virus[x]=max(virus[x]-1,1);
            else virus[x]=K+1;
            
            if (virus[y]) virus[y]=max(virus[y]-1,1);
            else virus[y]=K+1;
        }
    }

    for (int i = 1; i<=N; i++) cout << (bool)virus[i];

    return 0;
}