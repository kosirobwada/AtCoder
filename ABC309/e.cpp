#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
int main() {
    int N,M;cin >> N >> M;
    vector<int> p(N);
    map<int,vector<int>> G;
    for(int i=1; i<N; i++){
        cin >> p[i];p[i]--;
        G[p[i]].push_back(i);
    }
    vector<int> cnt(N,-1);
    for(int i=0; i<M; i++){
        int x,y;
        cin >> x >> y;
        x--;
        cnt[x] = max(cnt[x],y);
    }
    queue<int> q;
    q.push(0);
    int ans = 0;
    vector<bool> flag(N,false);
    while(!q.empty()){
        int x = q.front();
        q.pop();
        flag[x] = true;
        int z = cnt[x];
        for(auto v: G[x]){
            cnt[v] = max(cnt[v],z-1);
            if(flag[v])continue;
            q.push(v);
        }
    }
    for(int i=0; i<N; i++){
        if(cnt[i]>=0)ans++;
    }
    cout << ans << endl;
    return 0;
}