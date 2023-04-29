#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool isprime(long long N) {
    if (N < 2) return false;
    for (long long i = 2; i * i <= N; ++i) {
        if (N % i == 0) return false;
    }
    return true;
}
int main() {
    ll N;cin >> N;
    ll ans = 0;
    ll x = sqrt(N);
    //cout << x << endl;
    vector<ll> a;
    for(int i=2; i<x+10; i++){
        if(isprime(i))a.push_back(i);
    }
    int M = a.size();
    //cout << M << endl;
    for(int i=M-1; i>=2; i--){
        for(int j=i-1; j>=0; j--){
            for(int k=j-1; k>=0; k--){
                if((i*k*sqrt(j))<=sqrt(N)){
                    ans += j*k;
                    i++;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}