#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ll N,D;cin >> N >> D;
    vector<int> a(N);
    for(int i=0; i<N; i++){
        cin >> a[i];
    }
    for(int i=1; i<N; i++){
        if(a[i]-a[i-1]<=D){
            cout << a[i] << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}