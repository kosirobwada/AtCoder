#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;cin >> N;
    string S;cin >> S;
    bool flag = true;
    for(int i=0; i<N-1; i++){
        if(S[i]==S[i+1])flag = false;
    }
    if(flag)cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}