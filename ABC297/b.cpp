#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    string S;cin >> S;
    int N = 8;
    bool flag = true;
    int x,y;
    bool f1 = false;
    for(int i=0; i<N; i++){
        if(S[i]=='B' && f1==false){
            f1=true;
            x = i;
        }
        else if(S[i]=='B' && f1==true){
            y = i;
        }
    }
    if(x%2==y%2)flag = false;
    bool f2 = false;
    int a,b,c;
    for(int i=0; i<N; i++){
        if(S[i]=='K')a = i;
        if(S[i]=='R' && f2==false){
            f2 = true;
            b = i;
        }
        else if(S[i]=='R' && f2==true){
            c = i;
        }
    }
    if(b>a || c<a)flag = false;
    if(flag)cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}