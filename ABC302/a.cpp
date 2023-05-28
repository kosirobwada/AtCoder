#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ll A,B;cin >> A >> B;
    if(A%B==0)cout << A/B << endl;
    else cout << A/B + 1 << endl;
    return 0;
}