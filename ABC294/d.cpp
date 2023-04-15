#include <bits/stdc++.h>
using namespace std;
int main() {
    int N,Q;cin >> N >> Q;
    set<int> st1,st2;
    for(int i=1; i<=N; i++){
        st1.insert(i);
    }
    while(Q--){
        int t;cin >> t;
        if(t==1){
            int x = *st1.begin();
            st1.erase(x);
            st2.insert(x);
        }
        if(t==2){
            int y;cin >> y;
            st2.erase(y);
        }
        if(t==3){
            int z = *st2.begin();
            cout << z << endl;
        }
        
    }
    return 0;
}