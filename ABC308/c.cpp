#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
int main() {
    int N;cin >> N;
    vector<long double> a(N),b(N);
    for(int i=0; i<N; i++){
        cin >> a[i] >> b[i];
    }
    vector<pair<long double,int>> p(N);
    for(int i=0; i<N; i++){
        p[i] = make_pair(a[i]/(a[i]+b[i]),-i);
    }
    sort(p.begin(),p.end());
    reverse(p.begin(),p.end());
    for(int i=0; i<N; i++){
        cout << -p[i].second+1 << " ";
    }
    cout << endl;
    return 0;
}