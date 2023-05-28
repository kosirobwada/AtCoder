#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
using namespace atcoder;
using ll = long long;
const int INF = 1e9;
int main() {
    int N,Q;cin >> N >> Q;
    vector<int> a(N,INF);
    vector<int> z1(Q,0);
    vector<int> z2(Q,0);
    vector<int> z3(Q,0);
    vector<int> t(Q,0);
    for(int i=0; i<Q; i++){
        int T;cin >> T;
        t[i] = T;
        if(T==1){
            int x,y;cin >> x >> y;
            x--;y--;
            z1[i] = x;z2[i] = y;
        }
        if(T==2){
            int x;cin >> x;
            x--;z3[i] = x;
        }
    }
    dsu uf(N);
    for(int i=Q-1; i>=0; i--){
        if(t[i]==1){
            if(i<=a[z1[i]]&&i<=a[z2[i]])uf.merge(z1[i],z2[i]);
        }
        if(t[i]==2){
        }
    }
    map<int,int> mp;
    for(int i=0; i<N; i++){
        mp[uf.leader(i)]++;
    }
    int ans = 0;
    for(auto itr=mp.begin();itr!=mp.end();itr++){
        if(itr->second==1)ans++;
    }
    cout << ans << endl;
    return 0;
}