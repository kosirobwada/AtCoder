#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int N,K,Q;cin >> N >> K >> Q;
    multiset<int> stm,stM;
    vector<int> a(N,0);
    int mi = 0,ma = 0;
    ll ans = 0;
    for(int i=0; i<K; i++){
        stm.insert(0);
    }
    for(int i=0; i<N-K; i++){
        stM.insert(0);
    }
    while(Q--){
        int x,y;cin >> x >> y;
        x--;
        if(y>=mi){
            stm.insert(y);
            ans += y;
        }
        else{
            stM.insert(y);
        }
        if(a[x]>=mi){
            stm.erase(a[x]);
            ans -= a[x];
        }
        else{
            stM.erase(a[x]);
        }
        mi = *(stm.begin());
        ma = *(stM.rbegin());
        a[x] = y;
        cout << ans << endl;
    }
    return 0;
}