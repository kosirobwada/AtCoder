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
    int b0 = a[0], b1 = a[1];
    set<int> st1,st2,st3;
    for(int i=2; i<N; i++){
        if(a[i]<a[0])st1.insert(a[i]);
        else if(a[i]<=a[1])st2.insert(a[i]);
        else st3.insert(a[i]);   
    }
    if(st2.size()>=M){
        cout << 0 << endl;
        return 0;
    }
    int T = M - st2.size();
    ll ans1=0,ans2=0;
    for(int i=0; i<T; i++){
        int x1,x2;
        if(st1.empty()){
            ans1 = *st3.begin() - b1;
            a[1] = *st3.begin();
            st3.erase(st3.begin());
            continue;
        }
        if(st3.empty()){
            ans2 = b0 - *st1.rbegin();
            a[0] = *st1.rbegin();
            st1.erase(--st1.end());
            continue;
        }
        x1 = b0 - *st1.rbegin();
        x2 = *st3.begin() - b1;
        if(x1>=x2){
            ans1 = x2;
            a[1] = *st3.begin();
            st3.erase(st3.begin());
        }
        else{
            ans2 = x1;
            a[0] = *st1.rbegin();
            st1.erase(--st1.end());
        }
    }
    cout << ans1+ans2 << endl;
    return 0;
}