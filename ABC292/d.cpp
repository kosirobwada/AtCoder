#include <bits/stdc++.h>
using namespace std;
struct UnionFind {
    vector<int> par, rank, siz,e_size;

    // 構造体の初期化
    UnionFind(int n) : par(n,-1), rank(n,0), siz(n,1) ,e_size(n,0){ }

    // 根を求める
    int root(int x) {
        if (par[x]==-1) return x; // x が根の場合は x を返す
        else return par[x] = root(par[x]); // 経路圧縮
    }

    // x と y が同じグループに属するか (= 根が一致するか)
    bool issame(int x, int y) {
        return root(x)==root(y);
    }

    // x を含むグループと y を含むグループを併合する
    bool unite(int x, int y) {
        int rx = root(x), ry = root(y); // x 側と y 側の根を取得する
        if (rx==ry){ 
                e_size[rx]++;
                return false;
        } // すでに同じグループのときは何もしない
        // union by rank
        if (rank[rx]<rank[ry]) swap(rx, ry); // ry 側の rank が小さくなるようにする
        par[ry] = rx; // ry を rx の子とする
        if (rank[rx]==rank[ry]) rank[rx]++; // rx 側の rank を調整する
        siz[rx] += siz[ry]; // rx 側の siz を調整する
        e_size[rx] += e_size[ry]+1;
        return true;
    }

    // x を含む根付き木のサイズを求める
    int size(int x) {
        return siz[root(x)];
    }
    int edge_size(int x){
        return e_size[root(x)];
    }
};

int main() {
        int N,M;cin >> N >> M;
        UnionFind uf(N);
        for(int i=0; i<M; i++){
                int a,b;cin >> a >> b;
                a--;b--;
                uf.unite(a,b);
        }
        for(int i=0; i<N; i++){
                if(i==uf.root(i)){
                        if(uf.size(i)!=uf.edge_size(i)){
                                cout << "No" << endl;
                                return 0;
                        }
                        //cout << uf.size(i) << ' ' << uf.edge_size(i) << endl;
                }
        }
        cout << "Yes" << endl;
        return 0;
}