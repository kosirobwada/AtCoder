#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
int main() {
    int N,M,P;cin >> N >> M >> P;
    vector<ull> a(N),b(M);
    vector<ull> sa(N);
    for(int i=0; i<N; i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    for(int i=0; i<N; i++){
        if(i==0)sa[0] = a[0];
        else sa[i] = sa[i-1] + a[i];
    }
    vector<ull> sb(M);
    for(int i=0; i<M; i++){
        cin >> b[i];
    }
    sort(b.begin(),b.end());
    for(int i=0; i<M; i++){
        if(i==0)sb[i] = b[i];
        else sb[i] = sb[i-1] + b[i];
    }
    ll ans = N*M*P;
    ll x = 0;
    for(int i=0; i<N; i++){
        //int j = find_j(b,P-a[i]);
        int j = upper_bound(b.begin(), b.end(), P - a[i]) - b.begin();
        if(j<M && j>=0){
            x += P-a[i]-sb[j-1];
            //cout << x << endl;
        }
    }
    cout << x << " " << ans << endl;
    cout << ans - x << endl;
    return 0;
}