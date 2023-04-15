#include <bits/stdc++.h>
using namespace std;
using ll = long long;
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
    int Q;cin >> Q;
    ll mod = 998244353;
    ll tmp = 1;
    ll siz = 0;
    queue<int> q;
    q.push(1);
    while(Q--){
        int T;cin >> T;
        if(T==1){
            int x;cin >> x;
            tmp = tmp*10 + x;
            tmp %= mod;
            siz++;
            q.push(x);
        }
        if(T==2){
            ll k = modpow(10,siz,mod);
            k *= q.front();
            k %= mod;
            q.pop();
            tmp -= k;
            tmp %= mod;
            siz--;
        }
        if(T==3){
            if(tmp<0)tmp += mod;
            cout << tmp%mod << endl;
        }
    }
    return 0;
}