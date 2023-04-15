#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int H,W;cin >> H >> W;
    vector<vector<char>> S(H,vector<char>(W));
    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
            cin >> S[i][j];
        }
    }
    for(int i=0; i<H; i++){
        for(int j=0; j<W-1; j++){
            if(S[i][j]=='T' && S[i][j+1]=='T'){
                S[i][j]='P';S[i][j+1]='C';
            }
        }
    }
    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
            cout << S[i][j] ;
        }
        cout << endl;
    }
    return 0;
}