#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
int main() {
    int N;cin >> N;
    vector<int> a(N);
    vector<pair<int,int>> P(N);
    vector<vector<char>> S(N,vector<char>(N));
    for(int i=0; i<N; i++){
        int cnt = 0;
        for(int j=0; j<N; j++){
            cin >> S[i][j];
            if(S[i][j]=='o'){
                cnt ++; 
            }
        }
        P[i] = {-cnt,i};
    }
    sort(P.begin(),P.end());
    for(auto v : P){
        cout << v.second+1 << " ";
    }
    cout << endl;
    return 0;
}