#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int N,M,H,K;cin >> N >> M >> H >> K;
    int x=0,y=0;
    string S;cin >> S;
    set<pair<int,int>> st;
    while(M--){
        int s,t;cin >> s >> t;
        st.insert({s,t});
    }
    for(int i=0; i<N; i++){
        if(S[i]=='R'){
            x++;
        }
        if(S[i]=='L'){
            x--;
        }
        if(S[i]=='U'){
            y++;
        }
        if(S[i]=='D'){
            y--;
        }
        H--;
        if(H<0){
            cout << "No" << endl;
            return 0;
        }
        if(st.count({x,y})){
            if(H<K){
                H=K;
                st.erase({x,y});
            }
        }
        //cout << H << endl;
    }
    cout << "Yes" << endl;
    return 0;
}