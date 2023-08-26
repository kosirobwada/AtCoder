#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
int main() {
    int N;cin >> N;
    vector<int> x(N),y(N),z(N);
    ll a=0,b=0;
    for(int i=0; i<N; i++){
        cin >> x[i] >> y[i] >> z[i];
    }
    for(int i=0; i<N; i++){
        if(x[i]>y[i])a += z[i];
        else b += z[i];
    }
    if(a>b){
        cout << 0 << endl;
        return 0;
    }
    
    return 0;
}