#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int N,A,B;cin >> N >> A >> B;
    vector<int> a(N);
    for(int i=0; i<N; i++){
        cin >> a[i];
    }
    for(int i=0; i<N; i++){
        if(A+B==a[i])cout << i+1 << endl;
    }
    return 0;
}