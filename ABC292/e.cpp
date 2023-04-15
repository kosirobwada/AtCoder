#include <bits/stdc++.h>
using namespace std;
int main() {
    int N,M;cin >> N >> M;
    map<int,vector<int>> G;
    for(int i=0; i<M; i++){
        int a,b;cin >> a >> b;
        a--;b--;
        G[a].push_back(b);
    }
    long long ans = 0;
    for(int i=0; i<N; i++){
        int cnt = 0;
        queue<int> q;
        q.push(i);
        vector<int> dist(N,-1);
        dist[i] = 0;
        while(!q.empty()){
            int x = q.front();
            q.pop();
            for(auto v: G[x]){
                if(dist[v] != -1)continue;
                dist[v] = dist[x] + 1;
                q.push(v);
            }
        }
        for(int i=0; i<N; i++){
            if(dist[i]!=-1 && dist[i]!=0)cnt++;
        }
        ans += (cnt - G[i].size());
    }
    cout << ans << endl;
    return 0;
}