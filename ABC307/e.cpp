#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
long long modpow(long long a, long long n, long long mod) {
    long long res = 1;
    while (n > 0) {
        if (n & 1) res = res * a % mod;
        a = a * a % mod;
        n >>= 1;
    }
    return res;
}
int main() {
    ll N,M;cin >> N >> M;
    ll dp[N+1][3] = {0};
    ll mod = 998244353;
    dp[0][0] = 1;
    dp[0][1] = 0;
    dp[1][0] = 0;
    dp[1][1] = M-1;
    for(int i=2; i<N; i++){
        dp[i][0] = (dp[i-1][1])%mod;
        dp[i][0] %= mod;
        dp[i][1] = (modpow(M-1,i,mod)+mod-dp[i][0])%mod;
        dp[i][1] %= mod;
    }
    ll ans = (dp[N-1][1]*(M))%mod;
    cout << ans << endl;
    return 0;
}