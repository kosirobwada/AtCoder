#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
int main() {
    ll N;cin >> N;
    map<ll,multiset<ll>> mp;
    for(int i=0; i<N; i++){
        ll f,s;cin >> f >> s;
        if(mp[f].size()>=2){
            ll m = *mp[f].begin();
            if(m < s){
                mp[f].erase(m);
                mp[f].insert(s);
            }
        }  
        else mp[f].insert(s);
    }
    set<ll> x;
    for(auto v: mp){
        multiset<ll> val = v.second;
        ll maxVal = *val.rbegin();
        x.insert(maxVal);
    }
    ll ans1 = *x.rbegin();
    if(x.size()==1){
        ans1 = 0;
    }
    else{
        x.erase(ans1);
        ans1 += *x.rbegin();
    }
    ll ans2 = 0;
    for(auto v: mp){
        ll tmp = 0;
        multiset<ll> val = v.second;
        if(val.size()<2)continue;
        tmp = *val.rbegin();
        ll tmp2 = *val.begin() / 2;
        tmp += tmp2;
        if(tmp >= ans2){
            ans2 = tmp;
        }
    }
    if(ans1>ans2){
        cout << ans1 << endl;
    }
    else {
        cout << ans2 << endl;
    }
    return 0;
}