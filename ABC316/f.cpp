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
    queue<int> q;
    q.push(0);
    vector<int> dist(N,INF);
    dist[0] = 0;
    while(!q.empty()){
        int x = q.front();
        q.pop();
        for(auto v: G[x]){
            if(dist[v.to] < dist[x]+v.cost){
                dist[v.to] = dist[x] + v.cost;
                q.push(v.to);
            }
        }
    }
    for(int i=0; i<N; i++){
        cout << dist[i] << " ";
    }
    cout << endl;
    cout << MAX << endl;
    return 0;
}