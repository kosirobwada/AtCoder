#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
ll mod = 998244353;
int main() {
    string S;cin >> S;
    int N = S.size();
    vector<vector<ll>> dp(N+1,vector<ll>(N+1,0));
    if(S[0]==')'){
        cout << 0 << endl;
        return 0;
    }
    else{
        dp[0][0] = 1;
    }
    for(int i=0; i<N; i++){
        if(S[i]=='(' || S[i]=='?'){
            dp[i+1][1] += dp[i][0];
            dp[i+1][1] %= mod;
        }
        for(int j=1; j<N; j++){
            if(S[i]=='(' || S[i]=='?'){
                dp[i+1][j+1] += dp[i][j];
                dp[i+1][j+1] %= mod;
            }
            if(S[i]==')' || S[i]=='?'){
                dp[i+1][j-1] += dp[i][j];
                dp[i+1][j-1] %= mod;
            }
        }
    }
    cout << dp[N][0] << endl;
    return 0;
}