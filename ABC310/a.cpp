#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
int main() {
    int N,P,Q;cin >> N >> P >> Q;
    vector<int> a(N);
    for(int i=0; i<N; i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    int m = a[0] + Q;
    cout << min(P,m) << endl;
    return 0;
}