#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
int main() {
    int N;cin >> N;
    vector<int> a(N),b(N);
    set<pair<int,int>> x;
    for(int i=0; i<N; i++){
        cin >> a[i] >> b[i];
        x.insert(make_pair(a[i],b[i]));
    }
    ll ans = 0;
    for(int i=0; i<N; i++){
        pair<int, int> lastElement = *x.rbegin();
        x.erase(--x.end());
        swap(lastElement.first, lastElement.second);
        x.insert(lastElement);
        pair<int, int> y ;
        y = *x.rbegin();
        x.erase(--x.end());
        ans += y.first;
    }
    cout << ans << endl;
    return 0;
}