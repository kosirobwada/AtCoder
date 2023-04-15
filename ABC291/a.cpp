#include <bits/stdc++.h>
using namespace std;
int main() {
    string S;cin >> S;
    int N = S.size();
    int ans = -1;
    for(int i=0; i<N; i++){
        if(S[i]>='A' && S[i]<='Z'){
            ans = i+1;
        }
    }
    cout << ans << endl;
   return 0;
}