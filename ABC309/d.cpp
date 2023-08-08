#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
int main() {
    int N1,N2;cin >> N1 >> N2;
    int M;cin >> M;
    map<int,vector<int>> G;
    for(int i=0; i<M; i++){
        int a,b;
        cin >> a >> b;
        a--;b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    vector<int> dist(N1+N2,-1);
    dist[0] = 0;
    queue<int> q;
    q.push(0);
    while(!q.empty()){
        int now = q.front();
        q.pop();
        for(int i=0; i<G[now].size(); i++){
            if(dist[G[now][i]]==-1){
                dist[G[now][i]]=dist[now]+1;
                q.push(G[now][i]);
            }
        }   
    }
    int max = -1;
    for(int i=0; i<N1; i++){
        if(max<dist[i])max = dist[i];
    }
    vector<int> dist2(N1+N2,-1);
    dist2[N1+N2-1] = 0;
    queue<int> q2;
    q2.push(N1+N2-1);
    while(!q2.empty()){
        int now = q2.front();
        q2.pop();
        for(int i=0; i<G[now].size(); i++){
            if(dist2[G[now][i]]==-1){
                dist2[G[now][i]]=dist2[now]+1;
                q2.push(G[now][i]);
            }
        }   
    }
    int max2 = -1;
    for(int i=N1; i<N1+N2; i++){
        if(max2<dist2[i])max2 = dist2[i];
    }
    cout << max + max2 + 1 << endl;
    return 0;
}