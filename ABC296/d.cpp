#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll N,M;
vector<long long> divisor(ll n ,ll q , ll r) {
    vector<long long> ret;
    for (long long i = sqrt(n); i >=0; i--) {
        if(n>i*q){
            ret.push_back(-1);
            break;
        }
        if (n % i == 0) {
            ret.push_back(i);
            if (i * i != n) ret.push_back(n / i);
            break;
        }
    }
    return ret;
}
int main() {
    cin >> N >> M;
    if(N<sqrt(M)){
        cout << -1 << endl;
        return 0;
    }
    ll t = M;
    while(1){
        vector<ll> x = divisor(t,N,M);
        if(x[0]==-1){
            t++;
            continue;
        }
        ll siz = x.size();
        ll a,b;
        if(siz%2==1){
            a = x[0];
            b = x[0];
        }
        else{
            a = x[1];
            b = x[0];
        }
        if(a<=N&&b<=N){
            cout << t << endl;
            return 0;
        }
        t++;
    }
    cout << -1 << endl;
    return 0;
}