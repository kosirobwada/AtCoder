#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int dx[5] = {0,1,1,-1,-1};
int dy[5] = {0,1,-1,1,-1};
int main() {
    int H,W;cin >> H >> W;
    int N = min(H,W);
    vector<int> ans(N+1);
    vector<vector<char>> S(H,vector<char>(W));
    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
            cin >> S[i][j];
        }
    }
    for(int i=1; i<H-1; i++){
        for(int j=1; j<W-1; j++){
            bool flag = true;
            for(int k=0; k<5; k++){
                if(S[i+dx[k]][j+dy[k]]!='#')flag = false;
            }
            if(flag){
                int a=i,b=j;
                int cnt = 0;
                //
                while(1){
                    //cout << a << b << endl;
                    if(a<H-1&&b<W-1)a++,b++;
                    else break;
                    if(S[a][b]=='#')cnt++;
                    else break;
                }
                ans[cnt]++;
            }
        }
    }
    for(int i=1; i<=N; i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}