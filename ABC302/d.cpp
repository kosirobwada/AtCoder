#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ll N,M,D;cin >> N >> M >> D;
    vector<ll> a(N),b(M);
    for(int i=0; i<N; i++){
        cin >> a[i];
    }
    for(int i=0; i<M; i++){
        cin >> b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    
    return 0;
}