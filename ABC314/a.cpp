#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
int main() {
    string S = "3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
    int N;cin >> N;
    cout << "3." ;
    for(int i=0; i<N; i++){
        cout << S[i+2] ;
    }
    cout << endl;
    return 0;
}