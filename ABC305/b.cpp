#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    char p,q;cin >> p >> q;
    vector<int> a(7);
    a[0]=0;a[1]=3;a[2]=4;a[3]=8;a[4]=9;a[5]=14;a[6]=23;
    int x = p-'A';int y = q-'A';
     cout << abs(a[y] - a[x]) << endl;
    return 0;
}