#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int W,H;cin >> W >> H;
    int N;cin >> N;
    vector<int> p(N),q(N);
    for(int i=0; i<N; i++){
        cin >> p[i] >> q[i];
    }
    int A;cin >> A;
    vector<int> a(A);
    for(int i=0; i<N; i++){
        cin >> a[i];
    }
    int B;cin >> B;
    vector<int> b(B);
    for(int i=0; i<N; i++){
        cin >> b[i];
    }
    ll max = 0;
    ll min = 1e18;
    map<pair<ll,ll>,ll> mp;
    for(int i=0; i<N; i++){
        int dx,dy;
        int  itra = lower_bound(a.begin(),a.end(),p[i])-a.begin();
        int  itrb = lower_bound(b.begin(),b.end(),q[i])-b.begin();
        cout << itra << " " << itrb << endl;
    }
    return 0;
}