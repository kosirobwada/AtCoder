#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
int main() {
    int T;cin >> T;
    while(T--){
        int N;cin >> N;
        string S;cin >> S;
        char x = S[0];
        bool flag = false;
        for(int i=0; i<N; i++){
            if(i==0)continue;
            string a,b;
            a = S.substr(0,i);
            b = S.substr(i,N-i);
            if(a<b){
                cout << "Yes" << endl;
                flag = true;
                break;
            }
        }
        if(!flag)cout << "No" << endl;
    }
    return 0;
}