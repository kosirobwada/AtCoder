#include <bits/stdc++.h>
using namespace std;
int main() {
    int N,K;cin >> N >> K;
    string S;cin >> S;
    int cnt = 0;
    string T;
    for(int i=0; i<N; i++){
        if(S[i]=='x'){
            T += 'x';
        }
        else if(cnt<K){
            cnt++;
            T += 'o';
        }
        else {
            T += 'x';
        }
    }
    cout << T << endl;
   return 0;
}