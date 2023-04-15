#include <bits/stdc++.h>
using namespace std;
int main() {
    int H,W;cin >> H >> W;
    vector<vector<char>> S(H,vector<char>(W));
    vector<vector<char>> copy(H,vector<char>(W));
    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
            cin >> S[i][j];
            copy[i][j]=S[i][j];
        }
    }
    
    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
            if(S[i][j]!='#'&&S[i][j]!='.'){
                int x = S[i][j]-'0';
                for(int k=0; k<H; k++){
                    for(int l=0; l<W; l++){
                        if(abs(i-k)+abs(j-l)<=x ){
                            copy[k][l]='.';
                        }
                    }
                }
            }
        }
    }
    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
            cout << copy[i][j]  ;
        }
        cout << endl;
    }
    return 0;
}