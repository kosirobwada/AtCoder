#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;cin >> N;
    vector<int> a(N+1);
    for(int i=1; i<=N; i++){
        cin >> a[i];
    }
    set<int> st;
    for(int i=1; i<=N; i++){
        if(st.count(i)){
            continue;
        }
        else{
            st.insert(a[i]);
        }
    }
    set<int> ans;
    for(int i=1; i<=N; i++){
        ans.insert(i);
    }
    for(auto v: st){
        ans.erase(v);
    }
    cout << ans.size() << endl;
    for(auto v: ans){
        cout << v << ' ';
    }
    cout << endl;
    return 0;
}