#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int N;cin >> N;
    vector<int> x(N),y(N);
    for(int i=0; i<N; i++){
        cin >> x[i] >> y[i];
    }
    ll dp[2][N];
    for(int i=0; i<N; i++){
        dp[0][i] = 0;
        dp[1][i] = 0;
    }
    for(int i=0; i<N; i++){
        if(i==0){
            if(x[i]==0){
                dp[1][0] = 0;
                dp[0][0] = max(0,y[i]);
            }
            if(x[i]==1){
                dp[0][0] = 0;
                if(y[i]>0){
                    dp[1][0] = y[i];
                }
                else{
                    dp[0][0] = 0;
                }
            }
            continue;
        }
        if(x[i]==0){
            dp[1][i] = dp[1][i-1];
            dp[0][i] = max(max(dp[0][i-1],dp[1][i-1]) + y[i],dp[0][i-1]);
        }
        if(x[i]==1){
            dp[0][i] = dp[0][i-1];
            dp[1][i] = max(dp[1][i-1],dp[0][i-1]+y[i]);
        }
    }
    ll ans = max(dp[0][N-1],dp[1][N-1]);
    cout << ans << endl;
    return 0;
}