#include <bits/stdc++.h>
using namespace std;
int main() {
    int H,W;cin >> H >> W;
    vector<vector<int>> a(H,vector<int>(W));
    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
            cin >> a[i][j];
        }
    }
    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
            if(a[i][j]==0)cout << "." ;
            else{
                char c = 'A' + a[i][j] - 1;
                cout << c ;
            }
        }
        cout << endl;
    }
    return 0;
}