#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
// 頂点 v を始点とした深さ優先探索
void dfs(int v, vector<vector<int>> &G, vector<bool> &seen, vector<int> &order) {
    // 頂点 v に色を塗る
    seen[v] = true;
    // 頂点 v に隣接する頂点 v2 について、
    for(auto v2 : G[v]) {
        // v2 がすでに探索済みならば、スキップする
        if(seen[v2]) {continue;}
        // そうでなければ、頂点 v2 始点で深さ優先探索を行う
        dfs(v2, G, seen, order);
    }
    // order に頂点 v を挿入する
    order.push_back(v);
    return;
}
int main() {
    int N;cin >> N;
    vector<vector<int>> G(N);
    vector<vector<int>> H(N);
    for(int i=0; i<N; i++){
        int c;cin >> c;
        for(int j=0; j<c; j++){
            int p;cin >> p;p--;
            G[p].push_back(i);
            H[i].push_back(p);
        }
    }
    for(int i=0; i<N; i++){
        sort(G[i].begin(),G[i].end());
    }

    vector<int> dist(N,-1);
    dist[0] = 0;
    queue<int> q;
    q.push(0);
    while(!q.empty()){
        int now = q.front();
        q.pop();
        for(auto v: H[now]){
            if(dist[v] == -1){
                dist[v] = dist[now] + 1;
                q.push(v);
            }
        }
    }

    vector<bool> seen(N, false);   // seen[v]：頂点 v が黒色に塗られているか (探索済みか)
    vector<int> order;  // トポロジカルソート順を格納するための配列
    // 頂点 v = 0, 1, …, N-1 の順に
    for(int v = 0; v < N; ++v) {
        // 頂点 v がすでに訪問済みであれば order に含まれているため、スキップ
        if(seen[v]) {continue;}
        // そうでなければ、頂点 v を始点として深さ優先探索を行う
        dfs(v, G, seen, order);
    }
    // 配列 order を反転させる
    reverse(order.begin(), order.end());
    // 答えを空白区切りで出力する
    for(int i = 0; i < N; ++i) {
        if(dist[order[i]]==-1 || dist[order[i]]==0)continue;
        cout << order[i]+1 << " ";
    }
    cout << endl;

    return 0;
}