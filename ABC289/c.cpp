#include <bits/stdc++.h>
using namespace std;
int main() {
    int N,M;cin >> N >> M;
    map<int,set<int>> st;
    int ans = 0;
    for(int i=0; i<M; i++){
        int c;cin >> c;
        for(int j=0; j<c; j++){
            int x;cin >> x;
            st[i].insert(x);
        }
    }
    for(int bit=0; bit<(1<<M); bit++){
        vector<bool> f(N+1,false);
        for(int i=0; i<M; i++){
            if(bit&(1<<i)){
                for(auto v: st[i])f[v]=true;
            }
        }
        bool flag = true;
        for(int i=1; i<=N; i++){
            if(f[i]==false)flag = false;
        }
        if(flag)ans++;
    }
    cout << ans << endl;
   return 0;
}