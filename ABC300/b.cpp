#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int H,W;cin >> H >> W;
    bool flag = true;
    vector<vector<char>> S(H,vector<char>(W));
    vector<vector<char>> T(H,vector<char>(W));
    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
            cin >> S[i][j];
        }
    }
    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
            cin >> T[i][j];
        }
    }
    for(int i=0; i<H; i++){
        bool f1 = false;
        for(int k=0; k<W; k++){
            char x = S[i][0];
            for(int j=0; j<W-1; j++){
                char y = S[i][j+1];
                S[i][j] = y;
            }
            S[i][W-1] = x;
            bool f2 = true;
            for(int j=0; j<W; j++){
                if(S[i][j]!=T[i][j])f2 = false;
            }
            if(f2){
                f1=true;
                break;
            }
        }
        if(f1==false){
            cout << "No" << endl;
            return 0;
        }
    }
    for(int i=0; i<W; i++){
        bool f1 = false;
        for(int k=0; k<H; k++){
            char x = S[0][i];
            for(int j=0; j<H-1; j++){
                char y = S[j+1][i];
                S[j][i] = y;
            }
            S[H-1][i] = x;
            bool f2 = true;
            for(int j=0; j<H; j++){
                if(S[j][i]!=T[j][i])f2 = false;
            }
            if(f2){
                f1=true;
                break;
            }
        }
        if(f1==false){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}