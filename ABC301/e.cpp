#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};
int main() {
    int H,W,T;cin >> H >> W >> T;
    vector<vector<char>> S(H,vector<char>(W));
    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
            cin >> S[i][j];
        }
    }
    return 0;
}