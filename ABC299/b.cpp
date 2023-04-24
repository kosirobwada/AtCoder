#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ll N,T;cin >> N >> T;
    vector<ll> c(N),r(N);
    for(int i=0; i<N; i++){
        cin >> c[i];
    }
    int id = -1,m = -1;
    for(int i=0; i<N; i++){
        cin >> r[i];
    }
    for(int i=0; i<N; i++){
        if(c[i]==T){
            if(r[i]>m){
                id = i+1;
                m = r[i];
            }
        }
    }
    if(id!=-1){
        cout << id << endl;
        return 0;
    }
    T = c[0];
    for(int i=0; i<N; i++){
        if(c[i]==T){
            if(r[i]>m){
                id = i+1;
                m = r[i];
            }
        }
    }
    cout << id << endl;
    return 0;
}