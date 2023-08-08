#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
using namespace atcoder;
using ll = long long;
using ull = unsigned long long;
int main() {
    int N;cin >> N;
    vector<int> a(N,0);
    for(int i=0; i<N; i++){
        cin >> a[i];
        a[i]--;
    }
    dsu uf(N);
    vector<int> root;
    for(int i=0; i<N; i++){
        if(uf.leader(i)==uf.leader(a[i])){
            root.push_back(uf.leader(i));
        }
        uf.merge(a[i],i);
    }
    for(auto u: root){
        map<int,int> mp;
        vector<int> ans;
        int fi = u;
        int y = u;
        int z = -1;
        bool flag = false;
        ans.push_back(y);
        mp[y]++;
        while(1){
            int x = a[y];
            if(mp[x] && fi==x){
                flag = true;
                break;
            }
            else if(mp[x]){
                z = x;
                break;
            }
            mp[x]++;
            ans.push_back(x);
            y = x;
        }
        if(flag){
            cout << ans.size() << endl;
            for(auto v: ans){
                cout << v+1 << " ";
            }
            cout << endl;
            return 0;
        }
        else{
            //cout << z+1 << endl;
            mp.clear();
            ans.clear();
            fi = z;
            while(1){
                int x = a[z];
                if(mp[x] && fi==x){
                    flag = true;
                    break;
                }
                else if(mp[x]){
                    z = x;
                    break;
                }
                mp[x]++;
                ans.push_back(x);
                z = x;
                }
                    cout << ans.size() << endl;
                    for(auto v: ans){
                        cout << v+1 << " ";
                    }
                cout << endl;
                return 0;
        }
    }
    return 0;
}