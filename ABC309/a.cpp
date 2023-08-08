#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
int main() {
    int A,B;cin >> A >> B;
    if(abs(A-B)==1&&(!(A==3&&B==4))&&(!(A==6&&B==7))){
        cout << "Yes" << endl;
    }
    else cout << "No" << endl;
    return 0;
}