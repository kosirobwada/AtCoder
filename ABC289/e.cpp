#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;
using P = pair<int,int>;
int main() {
    int T;cin >> T;
    while(T--){
        int N,M;cin >> N >> M;
        vector<int> c(N);
        map<int,vector<int>> G;
        for(int i=0; i<N; i++){
            cin >> c[i];
        }
        for(int i=0; i<M; i++){
            int a,b;cin >> a >> b;
            a--;b--;
            G[a].push_back(b);
            G[b].push_back(a);
        }
        vector<vector<int>> dist(N,vector<int>(N,INF));
        queue<P> q;
        q.push({0,N-1});
        dist[0][N-1] = 0;
        while(!q.empty()){
            P p = q.front();q.pop();
            int x = p.first;int y = p.second;
            for(auto v: G[x]){
                for(auto u: G[y]){
                    if(c[v]==c[u])continue;
                    if(dist[v][u]!=INF)continue;
                    dist[v][u] = dist[x][y] + 1;
                    q.push({v,u});
                }
            }
        }
        if(dist[N-1][0]==INF)cout << -1 << endl;
        else cout << dist[N-1][0] << endl;
    }
    return 0;
}