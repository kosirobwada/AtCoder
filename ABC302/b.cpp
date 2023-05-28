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
        for(int j=0; j<=W-5; j++){
            if(S[i][j]=='s'&&S[i][j+1]=='n'&&S[i][j+2]=='u'&&S[i][j+3]=='k'&&S[i][j+4]=='e'){
                cout << i+1 << " " << j+1 << endl;
                cout << i+1 << " " << j+2 << endl;
                cout << i+1 << " " << j+3 << endl;
                cout << i+1 << " " << j+4 << endl;
                cout << i+1 << " " << j+5 << endl;
                return 0;
            }
            if(S[i][j+4]=='s'&&S[i][j+3]=='n'&&S[i][j+2]=='u'&&S[i][j+1]=='k'&&S[i][j]=='e'){
                cout << i+1 << " " << j+5 << endl;
                cout << i+1 << " " << j+4 << endl;
                cout << i+1 << " " << j+3 << endl;
                cout << i+1 << " " << j+2 << endl;
                cout << i+1 << " " << j+1 << endl;
                return 0;
            }
        }
    }
    for(int i=0; i<=H-5; i++){
        for(int j=0; j<W; j++){
            if(S[i][j]=='s'&&S[i+1][j]=='n'&&S[i+2][j]=='u'&&S[i+3][j]=='k'&&S[i+4][j]=='e'){
                cout << i+1 << " " << j+1 << endl;
                cout << i+2 << " " << j+1 << endl;
                cout << i+3 << " " << j+1 << endl;
                cout << i+4 << " " << j+1 << endl;
                cout << i+5 << " " << j+1 << endl;
                return 0;
            }
            if(S[i+4][j]=='s'&&S[i+3][j]=='n'&&S[i+2][j]=='u'&&S[i+1][j]=='k'&&S[i][j]=='e'){
                cout << i+5 << " " << j+1 << endl;
                cout << i+4 << " " << j+1 << endl;
                cout << i+3 << " " << j+1 << endl;
                cout << i+2 << " " << j+1 << endl;
                cout << i+1 << " " << j+1 << endl;
                return 0;
            }
        }
    }
    for(int i=0; i<=H-5; i++){
        for(int j=0; j<=W-5; j++){
            if(S[i][j]=='s'&&S[i+1][j+1]=='n'&&S[i+2][j+2]=='u'&&S[i+3][j+3]=='k'&&S[i+4][j+4]=='e'){
                cout << i+1 << " " << j+1 << endl;
                cout << i+2 << " " << j+2 << endl;
                cout << i+3 << " " << j+3 << endl;
                cout << i+4 << " " << j+4 << endl;
                cout << i+5 << " " << j+5 << endl;
                return 0;
            }
            if(S[i+4][j+4]=='s'&&S[i+3][j+3]=='n'&&S[i+2][j+2]=='u'&&S[i+1][j+1]=='k'&&S[i][j]=='e'){
                cout << i+5 << " " << j+5 << endl;
                cout << i+4 << " " << j+4 << endl;
                cout << i+3 << " " << j+3 << endl;
                cout << i+2 << " " << j+2 << endl;
                cout << i+1 << " " << j+1 << endl;
                return 0;
            }
        }
    }
    for(int i=0; i<=H-5; i++){
        for(int j=0; j<=W-5; j++){
            if(S[i][j+4]=='s'&&S[i+1][j+3]=='n'&&S[i+2][j+2]=='u'&&S[i+3][j+1]=='k'&&S[i+4][j]=='e'){
                cout << i+1 << " " << j+5 << endl;
                cout << i+2 << " " << j+4 << endl;
                cout << i+3 << " " << j+3 << endl;
                cout << i+4 << " " << j+2 << endl;
                cout << i+5 << " " << j+1 << endl;
                return 0;
            }
            if(S[i+4][j]=='s'&&S[i+3][j+1]=='n'&&S[i+2][j+2]=='u'&&S[i+1][j+3]=='k'&&S[i][j+4]=='e'){
                cout << i+5 << " " << j+1 << endl;
                cout << i+4 << " " << j+2 << endl;
                cout << i+3 << " " << j+3 << endl;
                cout << i+2 << " " << j+4 << endl;
                cout << i+1 << " " << j+5 << endl;
                return 0;
            }
        }
    }

    return 0;
}