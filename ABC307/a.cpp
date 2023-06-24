#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
int main() {
    int N;cin >> N;
    for(int i=0; i<N; i++){
        vector<int> a(7);
        ull ans = 0;
        for(int j=0; j<7; j++){
            cin >> a[i] ;
            ans += a[i];
        }
        cout << ans << " ";
    }
    cout << endl;
    return 0;
}