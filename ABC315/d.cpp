#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
int main() {
    int H,W;cin >> H >> W;
    vector<vector<char>> S(H,vector<char>(W));
    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
            cin >> S[i][j];
        }
    }
    while(1){
        int h = -1, siz = -1;
        for(int i=0; i<H; i++){
            set<char> st;
            map<char,int> mp;
            bool flag = false;
            for(int j=0; j<W; j++){
                if(S[i][j]!='.'){
                    st.insert(S[i][j]);
                    mp[S[i][j]]++;
                }
            }
            if(st.size()==1){
                
            }
        }
    }
    return 0;
}