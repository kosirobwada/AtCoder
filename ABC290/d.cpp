#include <bits/stdc++.h>
using namespace std;
long long GCD(long long A, long long B) {
    if (B == 0) 
        return A;
    else 
        return GCD(B, A % B);
}
int main() {
    int T;cin >> T;
    while(T--){
        int N,D,K;cin >> N >> D >> K;
        K--;
        int A = N / GCD(N,D);
        cout << (long long)D*K%N+K/A << endl;
    }
    return 0;
}