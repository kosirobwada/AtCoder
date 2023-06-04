#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int N;cin >> N;
    vector<string> S(N);
    vector<int> a(N);
    ll x = 1e18;
    ll id = -1;
    for(int i=0; i<N; i++){
        cin >> S[i] >> a[i];
        if(x>a[i]){
            x = a[i];
            id = i;
        }
    }
    for(int i=id; i<N; i++){
        cout << S[i] << endl;
    }
    for(int i=0; i<id; i++){
        cout << S[i] << endl;
    }
    return 0;
}