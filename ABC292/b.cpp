#include <bits/stdc++.h>
using namespace std;
int main() {
        int N,Q;cin >> N >> Q;
        vector<int> a(N,0);
        for(int i=0; i<Q; i++){
                int t,x;cin >> t >> x;
                x--;
                if(t==1){
                        a[x]++;
                }
                if(t==2){
                        a[x] += 2;
                }
                if(t==3){
                        if(a[x]>=2)cout << "Yes" << endl;
                        else cout << "No" << endl;
                }
        }
        return 0;
}