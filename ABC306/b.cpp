#include <bits/stdc++.h>
using namespace std;
using ll = long long;
long long modpow(long long a, long long n) {
    long long res = 1;
    while (n > 0) {
        if (n & 1) res = res * a ;
        a = a * a ;
        n >>= 1;
    }
    return res;
}
int main() {
    int N = 64;
    vector<int> a(N);
    for(int i=0; i<N; i++){
        cin >> a[i];
    }
    unsigned long long ans = 0;
    for(int i=0; i<N; i++){
        ans += a[i]*modpow(2,i);
    }
    cout << ans << endl;
    return 0;
}