#include <bits/stdc++.h>
using namespace std;
int main() {
    int N,X;cin >> N >> X;
    vector<int> a(N);
    set<int> st;
    for(int i=0; i<N; i++){
        cin >> a[i];
        st.insert(a[i]);
    }
    bool flag = false;
    for(int i=0; i<N; i++){
        int y = X + a[i];
        if(st.count(y)){
            flag = true;
            break;
        }
    }
    if(flag)cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0; 
}