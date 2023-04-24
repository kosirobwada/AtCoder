#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll ans = -1;
    int N;cin >> N;
    string S;cin >> S;
    bool f1 = true,f2 = true;
    for(int i=0; i<N; i++){
        if(S[i]=='o')f1=false;
        if(S[i]=='-')f2=false;
    }
    if(f1||f2){
        cout << -1 << endl;
        return 0;
    }
    ll cnt = 0;
    for(int i=0; i<N; i++){
        cnt = 1;
        if(S[i]=='o'){
            while(S[i]==S[i+1]){
                cnt++;i++;
            }
        }
        ans = max(ans,cnt);
    }
    cout << ans << endl;
    return 0;
}