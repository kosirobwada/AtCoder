#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
int main() {
    int T;cin >> T;
    while(T--){
        ll N,K;cin >> N >> K;
        cout << N%3 << K%3 << endl;
        if(N%3==K%3)cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}