#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ll N;cin >> N;
    if(N<=1e3-1){
        cout << N << endl;
    }
    else if(N>=1e3 && N<=1e4-1){
        ll x = N/10;
        cout << x*10 << endl;
    }
    else if(N>=1e4 && N<=1e5-1){
        ll x = N/100;
        cout << x*100 << endl;
    }
    else if(N>=1e5 && N<=1e6-1){
        ll x = N/1000;
        cout << x*1000 << endl;
    }
    else if(N>=1e6 && N<=1e7-1){
        ll x = N/10000;
        cout << x*10000 << endl;
    }
    else if(N>=1e7 && N<=1e8-1){
        ll x = N/100000;
        cout << x*100000 << endl;
    }
    else if(N>=1e8 && N<=1e9-1){
        ll x = N/1000000;
        cout << x*1000000 << endl;
    }
    return 0;
}