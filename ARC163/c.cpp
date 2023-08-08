#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
int main() {
    int N,M;cin >> N >> M;
    vector<int> a(N);
    for(int i=0; i<N; i++){
        cin >> a[i];
    }
    set<int> st1,st2,st3;
    int cnt = 0;
    for(int i=2; i<N; i++){
        if(a[i]<a[0]){
            st1.insert(a[0]-a[i]);
        }
        else if(a[i]>=a[0] && a[i]<=a[1]){
            cnt++;
        }
        else{
            st3.insert(a[i]-a[1]);
        }
    }
    if(cnt>=M){
        cout << 0 << endl;
        return 0;
    }
    int T = M - cnt;
    ll ans1 = 0, ans2 = 0;
    for(int i=0; i<T; i++){
        int x1,x2;
        if(st1.empty()){
            ans2 = *st3.begin();
            st3.erase(st3.begin());
            continue;
        }
        if(st3.empty()){
            ans1 = *st1.begin();
            st1.erase(st1.begin());
            continue;
        }
        x1 = *st1.begin();
        x2 = *st3.begin();
        if(x1 > x2){
            ans2 = x2;
            st3.erase(st3.begin());
        }
        else{
            ans1 = x1;
            st1.erase(st1.begin());
        }
    }
    cout << ans1 +  ans2 << endl;
    return 0;
}