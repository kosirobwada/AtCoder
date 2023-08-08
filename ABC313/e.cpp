#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
ll mod = 998244353;
int main() {
    int N;cin >> N;
    string S;cin >> S;
    bool flag = true;
    for(int i=0; i<N-1; i++){
        if(S[i]==S[i+1])flag = false;
    }
    if(!flag){
        cout << -1 << endl;
        return 0;
    }
    ll ans = 0;
    
    return 0;
}