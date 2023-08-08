#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
int main() {
    int N,M;cin >> N >> M;
    vector<vector<char>> S(N,vector<char>(M));
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cin >> S[i][j];
        }
    }
    vector<pair<int,int>> p;
    for(int i=0; i<N-8; i++){
        for(int j=0; j<M-8; j++){
            bool flag = true;
            for(int k=0; k<3; k++){
                for(int l=0; l<3 ; l++){
                    if(S[i+k][j+l]!='#')flag = false;
                }
            }
            for(int k=0; k<3; k++){
                if(S[i+k][j+3]!='.')flag = false;
                if(S[i+3][j+k]!='.')flag = false;
            }
            if(S[i+3][j+3]!='.')flag = false;
            for(int k=0; k<3; k++){
                for(int l=0; l<3; l++){
                    if(S[i+k+6][j+l+6]!='#')flag = false;
                }
            }
            for(int k=0; k<3; k++){
                if(S[i+k+6][j+5]!='.')flag = false;
                if(S[i+5][j+k+6]!='.')flag = false;
            }
            if(S[i+5][j+5]!='.')flag = false;
            if(flag)p.push_back({i,j});
        }
    }
    sort(p.begin(),p.end());
    for(auto v: p){
        cout << v.first+1 << " " << v.second+1 << endl;
    }
    return 0;
}