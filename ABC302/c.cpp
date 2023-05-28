#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int N,M;cin >> N >> M;
    vector<string> S(N);
    for(int i=0; i<N; i++){
        cin >> S[i];
    }
    map<int,vector<int>> G;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            int sum = 0;
            for(int k=0; k<M; k++){
                if(S[i][k]==S[j][k])continue;
                sum ++;
            }
            if(sum==1){
                G[i].push_back(j);
                G[j].push_back(i);
            }
        }
    }
   vector<int> dist(N, -1);    // seen[v]：頂点 v が黒く塗られいているなら true, そうでないなら false
    queue<int> que;
    dist[0] = 0;
    que.push(0);
    while(!que.empty()){
        int v = que.front();
        que.pop();
        
        // 頂点 v から 1 手で行ける頂点 next_v を探索
        for (auto next_v : G[v]) {
            // 頂点 next_v が探索済みであれば何もしない
            if (dist[next_v] != -1) {
                continue;
            }

            // 頂点 next_v を探索する
            dist[next_v] = dist[v] + 1;
            que.push(next_v);
        }
    }
    for(int i=0; i<N; i++){
        if(dist[i]==-1){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
     return 0;
}