#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;

int main() {
    int H, W;
    cin >> H >> W;
    vector<vector<char>> S(H, vector<char>(W));
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            cin >> S[i][j];
        }
    }
    bool flag = false;
    vector<char> a(5);
    a[0] = 's'; a[1] = 'n'; a[2] = 'u'; a[3] = 'k'; a[4] = 'e';
    char x = 's';
    //ここで時間をスタート
    auto start = chrono::steady_clock::now();
    function<void(int, int)> dfs = [&](int i, int j) {
        auto current = chrono::steady_clock::now();
        double elapsed_seconds = chrono::duration<double>(current - start).count();
        if (elapsed_seconds > 1.0) return;
        //タイムが1秒超えたら強制終了
        if(i >= H || j >= W || i < 0 || j < 0) return;
        x = S[i][j];
        //cout << i << ' ' << j << endl;
        int y = -1;
        for(int k = 0; k < 5; k++){
            if(S[i][j] == a[k]){
                y = k;
                break;
            }
        }
        if(y == -1) return;
        if(i == H-1 && j == W-1){
            flag = true;
            return;
        }
        if(i+1 < H){
            if(S[i+1][j] == a[(y+1)%5])dfs(i+1, j);
        }
        if(j+1 < W){
            if(S[i][j+1] == a[(y+1)%5])dfs(i, j+1);
        }
        if(i-1 >= 0){
            if(S[i-1][j] == a[(y+1)%5])dfs(i-1, j);
        }
        if(j-1 >= 0){
            if(S[i][j-1] == a[(y+1)%5])dfs(i, j-1);
        }
    };

    dfs(0, 0);

    if(flag){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
