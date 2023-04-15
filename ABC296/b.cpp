#include <bits/stdc++.h>
using namespace std;
int main() {
    int N = 8;
    vector<vector<char>> S(N,vector<char>(N));
    int a,b;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin >> S[i][j];
            if(S[i][j]=='*')a=8-i,b=j;
        }
    }
    char c = 'a' + b;
    cout << c << a << endl;
    return 0;
}