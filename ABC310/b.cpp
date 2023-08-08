#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
int main() {
    int N,M;cin >> N >> M;
    map<int,set<int>> mp;
    vector<int> p(N),c(N);
    for(int i=0; i<N; i++){
        cin >> p[i] >> c[i] ;
        int n = c[i];
        for(int j=0; j<n; j++){
            int y;cin >> y;
            mp[i].insert(y);
        }
    }
    bool flag = false;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(i==j)continue;
            if(p[i]<p[j])continue;
            if(p[i]>p[j]){
                bool f2 = true;
                for(auto itr=mp[i].begin();itr!=mp[i].end();itr++){
                    if(!mp[j].count(*itr))f2 = false;
                }
                if(f2)flag = true;
            }
            if(p[i]==p[j]){
                bool f2 = true;
                for(auto itr=mp[i].begin();itr!=mp[i].end();itr++){
                    if(!mp[j].count(*itr))f2 = false;
                }
                bool f3 = false;
                for(auto itr=mp[j].begin();itr!=mp[j].end();itr++){
                    if(!mp[i].count(*itr))f3 = true;
                }
                if(f2 && f3)flag = true;
            }
        }
    }
    if(flag)cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}