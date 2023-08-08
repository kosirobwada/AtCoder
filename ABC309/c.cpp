#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
int main() {
    ull N,K;cin >> N >> K;
    vector<ull> a(N),b(N);
    ull sum = 0; 
    map<ull,ull> mp;
    for(int i=0; i<N; i++){
        cin >> a[i] >> b[i];
        sum += b[i];
        mp[a[i]] += b[i];
    }
    if(sum <= K){
        cout << 1 << endl;
        return 0;
    }
    for(auto itr=mp.begin();itr!=mp.end();itr++){
        if(sum<=K){
            itr--;
            cout << itr->first+1 << endl;
            return 0;
        }
        sum -= itr->second;
        if(itr==mp.end())cout << itr->first+1 << endl;
    }
    return 0;
}