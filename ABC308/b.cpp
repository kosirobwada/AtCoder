#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
int main() {
    ll N,M;cin >> N >> M;
    vector<ll> p(M+1);
    vector<string> d(M),c(N);
    for(int i=0; i<N; i++){
        cin >> c[i];
    }
    for(int i=0; i<M; i++){
        cin >> d[i];
    }
    for(int i=0; i<M+1; i++){
        cin >> p[i];
    }
    map<string,int> mp;
    for(int i=0; i<M; i++){
        mp[d[i]] = p[i+1];
    }
    ll ans = 0;
    for(int i=0; i<N; i++){
        if(mp[c[i]])ans += mp[c[i]];
        else ans += p[0];
    }
    cout << ans << endl;
    return 0;
}