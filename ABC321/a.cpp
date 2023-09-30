#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
int main() {
    string S;cin >> S;
    bool flag = true;
    int N = S.size();
    for(int i=0; i<N-1; i++){
        if(S[i]<=S[i+1])flag = false;
    }
    if(flag)cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}