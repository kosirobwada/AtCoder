#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int N;cin >> N;
    vector<vector<int>> a(N,vector<int>(N));
    vector<vector<int>> b(N,vector<int>(N));
    vector<vector<int>> c(N,vector<int>(N,0));
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin >> a[i][j];
        }
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin >> b[i][j];
        }
    }
    bool flag1 = true;
    bool flag2 = true;
    bool flag3 = true;
    bool flag4 = true;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(a[i][j]==1 && b[i][j]==0)flag1 = false;
        }
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            c[i][j] = a[N-j-1][i];
        }
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(c[i][j]==1 && b[i][j]==0)flag2 = false;
        }
    }
    a = c;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            c[i][j] = a[N-j-1][i];
        }
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(c[i][j]==1 && b[i][j]==0)flag3 = false;
        }
    }
    a = c;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            c[i][j] = a[N-j-1][i];
        }
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(c[i][j]==1 && b[i][j]==0)flag4 = false;
        }
    }
    if(flag1==true||flag2==true||flag3==true||flag4==true){
        cout << "Yes" << endl;
    }
    else cout << "No" << endl;
    return 0;
}