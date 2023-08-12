#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#include <atcoder/all>
using namespace atcoder;
using mint = modint998244353;

int main() {
    int N;cin >> N;
    dsu uf(N);
    map<mint,vector<mint>> mp;
    vector<mint> a(N,0);
    for(int i=0; i<N; i++){
        int p,q;cin >> p >> q;
        p--;q--;
        mint P,Q;
        P = uf.size(p);Q = uf.size(q);
        int Pl,Ql;
        Pl = uf.leader(p);
        Ql = uf.leader(q);
        uf.merge(p,q);
        if(uf.leader(p)!=Pl){
            mp[Ql].push_back(Pl);
            a[Pl] -= a[Ql];
            a[Ql] += (Q/(P+Q));
        }
        else{
            mp[Pl].push_back(Ql);
            a[Ql] -= a[Pl];
            a[Pl] += P/(P+Q);
        }
    }
    /*mint x = uf.leader(0);
    queue<mint> q;
    vector<mint> ans(N,-1);
    ans[x] = a[x];
    q.push(x);
    while(!q.empty()){
        mint y = q.front();
        q.pop();
        for(auto v: mp[y]){
            if(ans[v]!=-1)continue;
            ans[v] = ans[y] + 1;
            q.push(v);
        }
    }*/
    /*for(int i=0; i<N; i++){
        cout << a[i] << " ";
    }*/
    cout << endl;
    return 0;
}