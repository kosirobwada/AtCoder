#include <bits/stdc++.h>
using namespace std;
int main() {
    int N,M;cin >> N >> M;
    vector<int> a(N),b(M);
    for(int i=0; i<N; i++){
        cin >> a[i];
    }
    for(int i=0; i<M; i++){
        cin >> b[i];
        b[i]--;
    }
    int ans = 0;
    for(int i=0; i<M; i++){
        ans += a[b[i]];
    }
    cout << ans << endl;
   return 0;
}