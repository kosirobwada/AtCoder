#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ll N,K;cin >> N >> K;
    vector<ll> a(N);
    for(int i=0; i<N; i++){
        cin >> a[i];
    }
    //priority_queue<ll,vector<ll>,greater<ll>> q;
    set<ll> st;
    for(int i=0; i<N; i++){
        st.insert(a[i]);
    }
    K--;
    while(K--){
        ll x = *st.begin();
        for(auto v: a){
            st.insert(v+x);
        }
        st.erase(x);
    }
    cout << *st.begin() << endl;
    return 0;
}