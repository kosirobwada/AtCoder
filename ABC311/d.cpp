#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
int main() {
    int N,M;cin >> N >> M;
    vector<string> S(N);
    for(int i=0; i<N; i++){
        cin >> S[i];
    }
    vector<vector<int>> ans(N,vector<int>(M));
    vector<vector<bool>> flag(N,vector<bool>(M,false));
    ans[1][1] = 2;
    queue<pair<int,int>> q;
    q.push({1,1});
    flag[1][1] = true;
    while(!q.empty()){
        pair<int,int> p = q.front();
        q.pop();
        int x = p.first;int y = p.second;
        int nx = x;int ny = y;
        while(1){
            nx--;
            if(S[nx][y]=='#'){
                if(!flag[nx+1][y]){
                    ans[nx+1][y] = 2;
                    flag[nx+1][y] = true;
                    q.push({nx+1,y});
                    //cout << nx+1 << " " << y << " " << ans[nx+1][y] << endl;
                }
                ans[nx+1][y] = 2;
                break;
            }
            ans[nx][y]++;
        }
        nx = x;
        while(1){
            nx++;
            if(S[nx][y]=='#'){
                if(!flag[nx-1][y]){
                    flag[nx-1][y] = true;
                    q.push({nx-1,y});
                    //cout << nx-1 << " " << y << " " << ans[nx-1][y] << endl;
                }
                ans[nx-1][y] = 2;
                break;
            }
            ans[nx][y]++;
        }
        nx = x;
        while(1){
            ny--;
            if(S[x][ny]=='#'){
                if(!flag[x][ny+1]){
                    flag[x][ny+1] = true;
                    q.push({x,ny+1});
                    //cout << x << " " << ny+1 << " " << ans[x][ny+1] << endl;
                }
                ans[x][ny+1]++;
                break;
            }
            ans[x][ny]++;
        }
        ny = y;
        while(1){
            ny++;
            if(S[x][ny]=='#'){
                if(!flag[x][ny-1]){
                    flag[x][ny-1] = true;
                    q.push({x,ny-1});
                    //cout << x << " " << ny-1 << " " << ans[x][ny-1] << endl;
                }
                ans[x][ny-1]++;
                break;
            }
            ans[x][ny]++;
        }
        ny = y;
    }
    int cnt = 0;
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            if(ans[i][j]){
                //cout << i << " " << j << endl;
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}