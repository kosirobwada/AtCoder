#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
int main() {
    string S;cin >> S;
    int N = S.size();
    bool flag = true;
    for(int i=0; i<N; i++){
        if(S[i]!='0' && i%2==1){
            flag = false;
        }
    }
    if(flag)cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}