#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll mod = 998244353;
int main() {
    int T;cin >> T;
    while(T--){
        ll N;cin >> N;
        ll ans = 0;
        map<ll,ll> mp;
        for(int i=1; i*i<=N; i++){
            ll j = N/i;
            mp[i] = j;
        }
        ans += mp.size();
        ans %= mod;
        for(int i=1; i*i<=N; i++){
            ans += 3*(mp[i]-1);
            ans %= mod;
            if(i!=1)ans += 6*(mp[i]-i)*(i-1);
            ans %= mod;
        }
        cout << ans << endl;
    }
    return 0;
}