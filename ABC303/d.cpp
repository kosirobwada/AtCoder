#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ll x,y,z;cin >> x >> y >> z;
    string S;cin >> S;
    ll N = S.size();
    ll dp[2][N+1];
    for(int i=0; i<2; i++){
        for(int j=0; j<N+1; j++){
            dp[i][j] = 0;
        }
    }
    for(int i=0; i<N; i++){
        if(i==0){
            if(S[i]=='A'){
                dp[0][0]=y;
                dp[1][0]=x+z;
            }
            if(S[i]=='a'){
                dp[0][0]=x;
                dp[1][0]=y+z;
            }
            continue;
        }
        if(S[i]=='A'){
            dp[0][i]=min(dp[0][i-1]+y,dp[1][i-1]+y+z);
            dp[1][i]=min(dp[1][i-1]+x,dp[0][i-1]+x+z);
        }
        if(S[i]=='a'){
            dp[0][i]=min(dp[0][i-1]+x,dp[1][i-1]+x+z);
            dp[1][i]=min(dp[1][i-1]+y,dp[0][i-1]+y+z);
        }
    }
    cout << min(dp[0][N-1],dp[1][N-1]) << endl;
    return 0;
}