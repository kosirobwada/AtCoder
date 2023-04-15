#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
        ll N;cin >> N;
        map<ll,ll> x;
        for(int i=1; i<N; i++){
                for(int j=1; j<N; j++){
                        if(i*j<360000)x[i*j]++;
                        if(i*j>=360000)break;
                }
        }
        ll ans = 0;
        for(int i=1; i<N; i++){
                ans += (x[i]*x[N-i]);
        }
        cout << ans << endl;
        return 0;
}