#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
using namespace atcoder;
int main() {
    int N,M;cin >> N >> M;
    dsu uf(2*N);
    for(int i=0; i<N; i++){
        uf.merge(2*i,2*i+1);
    }
    int ans1=0,ans2=0;
    for(int i=0; i<M; i++){
        int a,c;
        char B,D;
        cin >> a >> B >> c >> D;
        a--;c--;
        int b,d;
        if(B=='R')b=0;
        else b=1;
        if(D=='R')d=0;
        else d=1;
        if(uf.same(2*a+b,2*c+d))ans1++;
        else uf.merge(2*a+b,2*c+d);
    }
    int cnt = 0;
    for(int i=0; i<N; i++){
        if(uf.leader(2*i)==2*i || uf.leader(2*i+1)==2*1+1 || uf.leader(2*i+1)==2*i || uf.leader(2*i)==2*i+1){
            cnt++;
        }
    }
    ans2 = cnt - ans1;
    cout << ans1 << ' ' << ans2 << endl;
    return 0;
}