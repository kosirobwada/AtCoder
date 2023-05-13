#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int N;cin >> N;
    string S;cin >> S;
    int t = 0,a = 0;
    char last;
    for(int i=0; i<N; i++){
        if(S[i]=='T')t++,last='t';
        else a++,last='a';
    }
    if(t>a)cout << "T" << endl;
    else if(t<a)cout << "A" << endl;
    else{
        if(last=='a')cout << "T" << endl;
        else cout << "A" << endl;
    }
    return 0;
}