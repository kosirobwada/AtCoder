#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
int main() {
    int N,M;cin >> N >> M;
    string S,T;cin >> S >> T;
    bool flag1 = true;
    for(int i=0; i<N; i++){
        if(S[i]!=T[i])flag1 = false;
    }
    
    bool flag2 = true;
    for(int i=0; i<N; i++){
        if(S[i]!=T[i+M-N])flag2 = false;
    }
    if(flag1 && flag2){
        cout << 0 << endl;
        return 0;
    }
    if(flag1){
        cout << 1 << endl;
        return 0;
    }
    if(flag2){
        cout << 2 << endl;
        return 0;
    }
    cout << 3 << endl;
    return 0;
}