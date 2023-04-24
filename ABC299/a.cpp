#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int N;cin >> N;
    string S;cin >> S;
    bool f1=false,f2=false,f3=false;
    for(int i=0; i<N; i++){
        if(S[i]=='|'){
            if(f1==false)f1=true;
            else f3=true;
        }
        if(S[i]=='*'){
            if(f1==true && f3==false){
                cout << "in" << endl;
                return 0;
            }
        }
    }
    cout << "out" << endl;
    return 0;
}