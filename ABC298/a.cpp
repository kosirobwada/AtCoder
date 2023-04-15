#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int N;cin >> N;
    string S;cin >> S;
    bool flag1 = false;
    bool flag2 = true;
    for(int i=0; i<N; i++){
        if(S[i]=='o')flag1 = true;
        if(S[i]=='x')flag2 = false;
    }
    if(flag1 && flag2)cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}