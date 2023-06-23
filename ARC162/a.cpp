#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int Q;cin >> Q;
    while(Q--){
        int N;cin >> N;
        vector<int> p(N+1);
        int ans = 0;
        map<int,int> mp;
        for(int i=0; i<N; i++){
            cin >> p[i];
            p[i]--;
            mp[p[i]]=i;
        }
        int min = -1;
        for(auto itr=mp.begin();itr!=mp.end();itr++){
            //cout << itr->first << " " << itr->second << endl;
            if(min<itr->second){
                ans++;
                min = itr->second;
            }
        }
        //cout << endl;
        cout << ans << endl;
    }
    return 0;
}