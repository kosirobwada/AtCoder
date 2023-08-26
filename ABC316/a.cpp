#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
int main() {
    int N,H,X;cin >> N >> H >> X;
    vector<int> a(N);
    for(int i=0; i<N; i++){
        cin >> a[i];
    }
    for(int i=0; i<N; i++){
        if(H+a[i] >= X){
            cout << i+1 << endl;
            return 0;
        }
    }
    return 0;
}