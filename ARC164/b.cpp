#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
using ll = long long;
using namespace atcoder;
using ull = unsigned long long;
int main() {
    int N,M;cin >> N >> M;
    vector<int> a(M),b(M);
    for(int i=0; i<M; i++){
        cin >> a[i] >> b[i];
        a[i]--;b[i]--;
    }
    vector<int> c(N);
    for(int i=0; i<N; i++){
        cin >> c[i];
    }
    dsu uf(N);
    for(int i=0; i<M; i++){
        if(c[a[i]]!=c[b[i]])uf.merge(a[i],b[i]);
    }
    for(int i=0; i<M; i++){
        if(c[a[i]]==c[b[i]]){
            if(uf.leader(a[i])==uf.leader(b[i])){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}