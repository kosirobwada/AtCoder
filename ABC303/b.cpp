#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int N,M;cin >> N >> M;
    vector<vector<int>> a(M,vector<int>(N));
    for(int i=0; i<M; i++){
        for(int j=0; j<N; j++){
            cin >> a[i][j];a[i][j]--;
        }
    }
    int ans = 0;
    vector<vector<bool>> flag(N,vector<bool>(N,false));
    for(int i=0; i<N; i++){
        flag[i][i]=true;
    }
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N - 1; j++) {
            flag[a[i][j]][a[i][j + 1]] = true;
            flag[a[i][j + 1]][a[i][j]] = true;
        }
    }

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(flag[i][j]==false)ans++;
        }
    }
    cout << ans/2 << endl;
    return 0;
}