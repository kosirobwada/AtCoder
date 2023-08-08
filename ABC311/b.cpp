#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
int main() {
    int N,D;cin >> N >> D;
    vector<string> S(N);
    vector<bool> flag(D,true);
    for(int i=0; i<N; i++){
        cin >> S[i];
        for(int j=0; j<D; j++){
            if(S[i][j]=='x')flag[j]=false;
        }
    }
    int ans = 0;
    int cnt = 0;
    for(int i=0; i<D; i++){
        if(flag[i]){
            cnt++;
            ans = max(ans,cnt);
        }
        else{
            cnt = 0;
        }
    }
    cout << ans << endl;
    return 0;
}