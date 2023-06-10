#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int N,M,K;cin >> N >> M >> K;
    map<int,vector<int>> G;
    while(M--){
        int a,b;cin >> a >> b;
        a--;b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    vector<int> p(K),h(K);
    for(int i=0; i<K; i++){
        cin >> p[i] >> h[i];
        p[i]--;
    }
    vector<bool> flag(N,false);
    for(int i=0; i<K; i++){
        queue<int> q;
        vector<int> dist(N,-1);
        dist[p[i]]=0;
        flag[p[i]]=true;
        q.push(p[i]);
        int cnt = 0;
        while(!q.empty() && cnt<h[i]){
            int v = q.front();
            flag[v] = true;
            q.pop();
            for(auto nv :G[v]){
                if(dist[nv]!=-1)continue;
                dist[nv] = dist[v] + 1;
                q.push(nv);
            }
            cnt = dist[v];
        }
    }
    int cnt = 0;
    for(int i=0; i<N; i++){
        if(flag[i])cnt++;
    }
    cout << cnt << endl;
    for(int i=0; i<N; i++){
        if(flag[i])cout << i+1 << " ";
    }
    cout << endl;
    return 0;
}