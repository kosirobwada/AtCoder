#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using P = pair<int,int>;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int main() {
    int H,W;cin >> H >> W;
    vector<vector<char>> S(H,vector<char>(W));
    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
            cin >> S[i][j];
        }
    }
    vector<vector<char>> T(H,vector<char>(W));
    T = S;
    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
            if(T[i][j]=='>'){
                int k = j + 1; // Start from the next column
                while(k < W) { // Check within valid range
                    if(T[i][k] == '.') {
                        S[i][k] = '#';
                        k++;
                    } else {
                        break; // Stop when encountering anything other than '.'
                    }
                }
            }
            if(T[i][j]=='<'){
                int k = j - 1; // Start from the previous column
                while(k >= 0) { // Check within valid range
                    if(T[i][k] == '.') {
                        S[i][k] = '#';
                        k--;
                    } else {
                        break; // Stop when encountering anything other than '.'
                    }
                }
            }
            if(T[i][j]=='^'){
                int k = i - 1; // Start from the previous row
                while(k >= 0) { // Check within valid range
                    if(T[k][j] == '.') {
                        S[k][j] = '#';
                        k--;
                    } else {
                        break; // Stop when encountering anything other than '.'
                    }
                }
            }
            if(T[i][j]=='v'){
                int k = i + 1; // Start from the next row
                while(k < H) { // Check within valid range
                    if(T[k][j] == '.') {
                        S[k][j] = '#';
                        k++;
                    } else {
                        break; // Stop when encountering anything other than '.'
                    }
                }
            }
            /*cout << endl;
            for(int i=0; i<H; i++){
                for(int j=0; j<W; j++){
                    cout << S[i][j] ;
                }
                cout << endl;
            }*/
        }
    }
    int x1,x2,y1,y2;
    //cout << endl;
    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
            if(S[i][j]!='.' && S[i][j]!='S'&&S[i][j]!='G')S[i][j]='#';
            if(S[i][j] == 'S')x1=i,y1=j;
            if(S[i][j] == 'G')x2=i,y2=j;
        }
    }
    /*for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
            cout << S[i][j] ;
        }
        cout << endl;
    }*/
    queue<P> q;
    q.push({x1,y1});
    vector<vector<int>> dist(H,vector<int>(W,-1));
    dist[x1][y1] = 0;
    while(!q.empty()){
        P p = q.front();q.pop();
        int x,y;
        x = p.first;y = p.second;
        for(int i=0; i<4; i++){
            int nx,ny;
            nx = x + dx[i];ny = y + dy[i];
            if(nx<0 || ny<0|| nx>=H || ny>=W)continue;
            if(S[nx][ny]=='#')continue;
            if(dist[nx][ny]!=-1)continue;
            dist[nx][ny] = dist[x][y] + 1;
            q.push({nx,ny});
        }
    }
    cout << dist[x2][y2] << endl;
    return 0;
}