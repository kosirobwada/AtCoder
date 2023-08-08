#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
int main() {
    int N;cin >> N;
    vector<vector<char>> a(N,vector<char>(N));
    vector<vector<char>> b(N,vector<char>(N));
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin >> a[i][j];
        }
    }
    for(int i=1; i<N-1; i++){
        for(int j=1; j<N-1; j++){
            b[i][j] = a[i][j];
        }
    }
    b[0][0] = a[0][1];
    for(int i=1; i<N; i++){
        b[0][i] = a[0][i-1];
    }
    for(int i=1; i<N; i++){
        b[i][N-1] = a[i-1][N-1];
    }
    for(int i=0; i<N-1; i++){
        b[N-1][i] = a[N-1][i+1];
    }
    for(int i=0; i<N-1; i++){
        b[i][0] = a[i+1][0];
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cout << b[i][j];
        }
        cout << endl;
    }
    return 0;
}