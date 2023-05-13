#include <bits/stdc++.h>
using namespace std;
using ll = long long;
long long modpow(long long a, long long n) {
    long long res = 1;
    while (n > 0) {
        if (n & 1) res = res * a ;
        a = a * a ;
        n >>= 1;
    }
    return res;
}
int main() {
    string S;cin >> S;
    reverse(S.begin(),S.end());
    ll N;cin >> N;
    int x = S.size();
    ll sum = 0;
    for(int i=0; i<x; i++){
        if(S[i]=='?'){

        }
        else{
            if(S[i]=='0')continue;
            ll y = modpow(2,i);
            sum += y;
        }
    }
    if(sum>N){
        cout << -1 << endl;
        return 0;
    }
    ll ans = sum;
    for(int i=x-1; i>=0; i--){
        if(S[i]=='?'){
            ll y = modpow(2,i);
            //cout << N << ' ' << y << ' ' << sum << endl;
            if(N-y>=sum){
                ans += y;
                N -= y;
            }
        }
    }
    cout << ans << endl;
    return 0;
}