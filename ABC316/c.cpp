#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
const int INF = 1e9;
using P = pair<int,int>;
struct edge{
    int to;
    int cost;
};
int N,M;
vector<int> dijkstra(map<int,vector<edge>> G,int st){
    vector<int> dist(N,INF);
    vector<bool> vis(N,false);
    priority_queue<P,vector<P>,less<P>> q;
    dist[0] = 0;
    q.push({0,0});
    while(!q.empty()){
        P p = q.top();q.pop();
        int d,v;
        d = p.first;v = p.second;
        if(vis[v])continue;
        vis[v] = true;
        for(edge x: G[v]){
            if(dist[x.to]>dist[v]+x.cost){
                dist[x.to] = dist[v] + x.cost;
                q.push({dist[x.to],x.to});
            }
        }
    } 
    return dist;
}
int main() {
    map<int,vector<edge>> G;
    cin >> N >> M;
    for(int i=0; i<M; i++){
        int a,b,c;cin >> a >> b >> c;
        a--;b--;
        G[a].push_back({b,c});
        G[b].push_back({a,c});
    }  
    int MAX = -1;
    for(int i=0; i<N; i++){
        int max = -1;
        vector<int> d = dijkstra(G,i);
        for(int j=0; j<N; j++){
            cout << d[j] << " ";
        }
        cout << endl;
        for(int j=0; j<N; j++){
            if(d[j]==INF)continue;
            if(max < d[j])max = d[j];
        }
        if(MAX <= max) MAX = max;
    }
    cout << MAX << endl;
    return 0;
}