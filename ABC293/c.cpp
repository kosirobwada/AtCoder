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
    int ans = 0;
    set<int> st;
    auto dfs = [&](auto f,int i,int j)->void{
        if(i>=H||j>=W)return ;
        if(st.count(a[i][j]))return ;
        if(i==H-1 && j==W-1){
            ans++;
            return ;
        }
        st.insert(a[i][j]);
        f(f,i,j+1);
        f(f,i+1,j);
        st.erase(a[i][j]);
    };
    dfs(dfs,0,0);
    cout << ans << endl;
    return 0;
}