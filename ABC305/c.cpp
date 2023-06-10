#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
int main() {
    int H,W;cin >> H >> W;
    vector<vector<char>> S(H,vector<char>(W));
    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
            cin >> S[i][j];
        }
    }    
    int x = -1, y = -1;
    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
            if(S[i][j]=='#')continue;
            int cnt = 0;  
            for(int k=0; k<4; k++){
                int nx,ny;
                nx = i + dx[k];
                ny = j + dy[k];
                if(nx<0||ny<0||nx>=H||ny>=W)continue;
                if(S[nx][ny]=='#')cnt++;
            } 
            if(cnt >= 2){
                x = i+1;y = j+1 ;
            }
        }
    }
    cout << x << " " << y << endl;
    return 0;
}