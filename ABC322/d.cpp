#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
int main() {
    int N = 4;
    vector<vector<char>> a1(N,vector<char>(N));
    vector<vector<char>> a2(N,vector<char>(N));
    vector<vector<char>> a3(N,vector<char>(N));
    vector<vector<char>> v(1000,vector<char>(1000,'.'));
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin >> a1[i][j];
        }
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin >> a2[i][j];
        }
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin >> a3[i][j];
        }
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            for(int k=0; k<N; k++){
                for(int l=0; l<N; l++){
                    for(int m=0; m<N; m++){
                        for(int n=0; n<N; n++){
                            for(int p=0; p<N; p++){
                                for(int q=0; q<N; q++){
                                    
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}