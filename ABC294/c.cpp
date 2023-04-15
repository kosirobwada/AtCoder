#include <bits/stdc++.h>
using namespace std;
int main() {
    int N,M;cin >> N >> M;
    vector<int> a(N),b(M);
    for(int i=0; i<N; i++){
        cin >> a[i];
    }
    for(int i=0; i<M; i++){
        cin >> b[i];
    }
    vector<int> c;
    for(int i=0; i<N; i++){
        c.push_back(a[i]);
    }
    for(int i=0; i<M; i++){
        c.push_back(b[i]);
    }
    sort(c.begin(),c.end());
    vector<int> d(N),e(M);
    map<int,int> mp;
    int t = 1;
    for(auto x: c){
        mp[x] = t;
        t++;
    }
    for(int i=0; i<N; i++){
        cout << mp[a[i]] << ' ';
    }
    cout << endl;
    for(int i=0; i<M; i++){
        cout << mp[b[i]] << ' ';
    }
    cout << endl;
    return 0;
}