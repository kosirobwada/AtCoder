#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
using namespace atcoder;
using ll = long long;
int main() {
    int N,M;cin >> N >> M;
    dsu uf(N);
    for(int i=0; i<M; i++){
        int a,b;cin >> a >> b;
        a--;b--;
        uf.merge(a,b);
    }
    int K;cin >> K;
    set<pair<int,int>> st;
    for(int i=0; i<K; i++){
        int x,y;
        cin >> x >> y;
        x--;y--;
        int s,t;
        s = uf.leader(x);
        t = uf.leader(y);
        st.insert({s,t});
    }
    int Q;cin >> Q;
    while(Q--){
        int p,q;cin >> p >> q;
        p--;q--;
        int s,t;
        s = uf.leader(p);
        t = uf.leader(q);
        if(st.count({s,t}) || st.count({t,s})){
            cout << "No" << endl;
        }
        else cout << "Yes" << endl;
    }
    return 0;
}