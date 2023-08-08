#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
int main() {
    int N,M;cin >> N >> M;
    vector<int> a(N),b(M);
    map<int,int> m1,m2;
    set<int> st1,st2,st3;
    for(int i=0; i<N; i++){
        cin >> a[i];
        m1[a[i]]++;
        st1.insert(a[i]);
        st3.insert(a[i]);
    }
    for(int i=0; i<M; i++){
        cin >> b[i];
        m2[b[i]]++;
        st2.insert(b[i]);
        st3.insert(b[i]);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    if(a[0] > b[M-1]){
        int x = b[M-1];
        cout << x + 1 << endl;
        return 0;
    }
    ll cnt1=0, cnt2=M, tmp = 0;
    for(auto v: st3){
        int x = 0, y = 0;
        if(st1.count(v)){
            cnt1 += m1[v];
            y++;
        }     
        if(st2.count(v)){
            cnt2 -= m2[v];
            x++;
        }
        if(cnt1 >= cnt2){
            if(x==0 || (x==1 && y==1)){
                cout << v << endl;
                return 0;
            }
            else{
                cout << v+1 << endl;
                return 0;
            }
        }
    }
    return 0;
}