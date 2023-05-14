#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll mod = 998244353;
int main() {
    int T;cin >> T;
    int ans = 0;
    for(int i=1; i<=T; i++){
        for(int j=1; j<=T; j++){
            for(int k=1; k<=T; k++){
                if(i*j<=T && j*k<=T && i*k<=T)ans ++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}