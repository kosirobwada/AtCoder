#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;cin >> N;
    string S;cin >> S;
    bool flag = false;
    set<pair<int,int>> st;
    st.insert({0,0});
    int x=0,y=0;
    for(int i=0; i<N; i++){
        if(S[i]=='R'){
            x ++;
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
        if(st.count({x,y})){
            flag = true;
            break;
        }
        st.insert({x,y});
    }
    if(flag)cout << "Yes" << endl;
    else cout << "No" << endl;
   return 0;
}