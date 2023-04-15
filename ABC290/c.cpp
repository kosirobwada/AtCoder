#include <bits/stdc++.h>
using namespace std;
int main() {
    int N,K;cin >> N >> K;
    vector<int> a(N);
    set<int> st;
    for(int i=0; i<N; i++){
        cin >> a[i];
        st.insert(a[i]);
    }
    int cnt = 0;
    for(int i=0; i<=K; i++){
        if(!st.count(i)){
            cout << i << endl;
            return 0;
        }
        if(i==K)cout << i << endl;
    }
   return 0;
}