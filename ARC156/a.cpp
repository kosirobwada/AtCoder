#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;cin >> T;
    for(int i=0; i<T; i++){
        int N;cin >> N;
        string S;cin >> S;
        if(S=="011"||S=="110"){
            cout << -1 << endl;
            continue;
        }
        if(S=="0110"){
            cout << 3 << endl;
            continue;
        }
        int cnt = 0;
        bool flag = false;
        for(int j=0; j<N; j++){
            if(S[j]=='1'){
                cnt++;
                if(j!=N-1){
                    if(S[j+1]=='1')flag = true;
                }
            }
        }
        if(cnt%2){
            cout << -1 << endl;
            continue;
        }
        if(cnt!=2)cout << cnt/2 << endl;
        else if(flag) cout << 2 << endl;
        else cout << 1 << endl;
    }
   return 0;
}