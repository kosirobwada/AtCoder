#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
int main() {
    int N,M;cin >> N >> M;
    vector<int> a(M),b(M);
    vector<bool> flag(N,true);
    for(int i=0; i<M; i++){
        cin >> a[i] >> b[i];
        a[i]--;b[i]--;
    }
    for(int i=0; i<N; i++){
        bool f1 = false;
        for(int j=0; j<M; j++){
            if(a[j]==i)f1 = true;
            if(b[j]==i)flag[i] = false;
        }
        if(!f1)flag[i] = false;
    }
    int cnt = 0;
    for(int i=0; i<N; i++){
        if(flag[i])cnt++;
    }
    if(cnt==1){
        for(int i=0; i<N; i++){
            if(flag[i]){
                cout << i+1 << endl;
                return 0;
            }
        }
    }
    else{
        cout << -1 << endl;
    }
    return 0;
}