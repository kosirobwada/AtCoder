#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
int main() {
    int N;cin >> N;
    vector<int> c(N);
    map<int,vector<int>> a;
    for(int i=0; i<N; i++){
        cin >> c[i];
        for(int j=0; j<c[i]; j++){
            int x;cin >> x;
            a[x].push_back(i);
        }
    }
    int x;cin >> x;
    vector<pair<int,int>> P;
    for(auto v: a[x]){
        P.push_back({c[v],v});
    }
    sort(P.begin(),P.end());
    if(P.size()==0){
        cout << P.size() << endl;
        cout << endl;
        return 0;
    }
    int y = P[0].first;
    vector<int> ans;
    for(auto v: P){
        if(v.first!=y){
            break;
        }
        ans.push_back(v.second+1);
    }
    cout << ans.size() << endl;
    for(auto v: ans){
        cout << v << " ";
    }
    cout << endl;
    return 0;
}