#include <bits/stdc++.h>
using namespace std;
int main() {
    string S;cin >> S;
    int N = S.size();
    for(int i=0; i<N; i++){
        if(S[i]=='0')S[i]='1';
        else S[i]='0';
    }
    cout << S << endl;
   return 0;
}