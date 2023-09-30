#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
int main() {
    int N,X;cin >> N >> X;
    vector<int> a(N-1);
    int sum = 0;
    for(int i=0; i<N-1; i++){
        cin >> a[i];
        sum += a[i];
    }
    sort(a.begin(),a.end());
    int c,d,e;
    c = sum - a[0];
    d = sum - a[N-2];
    e = sum - a[0] - a[N-2];
    e = X - e;
    if(d >= X){
        cout << 0 << endl;
        return 0;
    }
    if(e <= 100 && e >= 0){
        cout << e << endl;
        return 0;
    }
    if(c >= X){
        cout << a[N-2] << endl;
        return 0;
    }
    cout << -1 << endl;
    //cout << c << " " << d << " " << e << endl;
    return 0;
}