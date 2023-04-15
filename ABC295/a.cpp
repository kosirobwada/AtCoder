#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int N;cin >> N;
    bool flag = false;
    vector<string> S(N);
    for(int i=0; i<N; i++){
        cin >> S[i];
        if(S[i]=="the"||S[i]=="and"||S[i]=="not"||S[i]=="that"||S[i]=="you"){
            flag = true;
        }
        
    }
    if(flag)cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}