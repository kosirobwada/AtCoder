#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
int main() {
    int N;cin >> N;
    string S;cin >> S;
    int cn1=0,cn2=0,cn3=0;
    for(int i=0; i<N; i++){
        if(S[i]=='A')cn1++;
        if(S[i]=='B')cn2++;
        if(S[i]=='C')cn3++;
        if(cn1 && cn2 && cn3){
            cout << i+1 << endl;
            return 0;
        }
    }
    return 0;
}