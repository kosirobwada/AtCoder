#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ll N;cin >> N;
    ll mod = 998244353;
    vector<ll> a(N),b(N);
    for(int i=0; i<N; i++){
        cin >> a[i] >> b[i];
    }
    ll dp[N+1][2];
    for(int i=0; i<N+1; i++){
        for(int j=0; j<2; j++){
            dp[i][j] = 0;
        }
    }
    dp[0][0]=1;dp[0][1]=1;
    for(int i=0; i<N-1; i++){
        if(a[i+1]==b[i+1]){
            cout << 0 << endl;
            return 0;
        }
        if(a[i+1]!=a[i]){
            dp[i+1][0]+=dp[i][0];
            dp[i+1][0]%=mod;
        }
        if(a[i+1]!=b[i]){
            dp[i+1][0]+=dp[i][1];
            dp[i+1][0]%=mod;
        }
        if(b[i+1]!=a[i]){
            dp[i+1][1]+=dp[i][0];
            dp[i+1][1]%=mod;
        }
        if(b[i+1]!=b[i]){
            dp[i+1][1]+=dp[i][1];
            dp[i+1][1]%=mod;
        }
    }
    cout << (dp[N-1][0]+dp[N-1][1])%mod << endl;
   return 0;
}