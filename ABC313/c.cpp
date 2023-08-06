#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
int main() {
    int N;cin >> N;
    vector<int> a(N);
    ll sum = 0;
    for(int i=0; i<N; i++){
        cin >> a[i];
        sum += a[i];
    }
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    ll ans = 0;
    ll x = sum % N;
    ll y = sum / N;
    vector<ll> b(N,y);
    for(int i=0; i<x; i++){
        b[i] += 1;
    }
    /*for(auto v: b){
        cout << v << " ";
    }
    cout << endl;*/
    for(int i=0; i<N; i++){
        ans += abs(a[i]-b[i]);
    }
    cout << ans/2 << endl;
    return 0;
}