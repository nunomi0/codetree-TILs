#include <iostream>
#include <vector>
using namespace std;

// 두 노드의 부모가 다르지만, 두 부모가 형제일 때 -> 부모는 다르지만 조부모가 같을 때 ++;
// a/bcd 인 경우 a의 부분집합-b의 부분집합=cd의 부분집합


int n,k,arr[1010],par[1010],ans=0,idx=-1,ki;
vector<int> tmp;

int main() {
    cin >> n >> k;
    for (int i = 0; i<n; i++){
        cin >> arr[i];

        if (k==arr[i]) ki=i; // 인덱스로 관리

        if (i==0) { // 루트 노드
            par[0]=-1;
            continue;
        } 

        if (arr[i]==arr[i-1]+1) tmp.push_back(i); // 루트 노드가 아닌 연속된 수의 집합
        else { // 부모 배열 저장
            for (int j = 0; j<tmp.size(); j++) par[tmp[j]]=idx;
            idx++;
            tmp.clear();
            tmp.push_back(i);
        }
    }
    if (tmp.size()){
        for (int i = 0; i<tmp.size(); i++) par[tmp[i]]=idx;
    }

    int par1=par[ki]; // 부모 인덱스
    int par2=par[par[ki]]; // 조부모 인덱스

    for (int i = 0; i<n; i++){
        if (par[i]!=par1 && par[par[i]]==par2) {
            if (par[i]==-1 || par[par[i]]==-1) continue;
            ans++;
        }
    }

    cout << ans;
    return 0;
}