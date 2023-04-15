#include <bits/stdc++.h>
using namespace std;
long long INF = 1e18;
void warshall_floyd(vector<vector<long long>> &dist) {
    int V = dist.size();
    for (int k = 0; k < V; k++) {
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }
}
int main() {
    long long N,K;cin >> N >> K;
    vector<vector<long long>> a(N,vector<long long>(N));
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin >> a[i][j];
            if(a[i][j]==0)a[i][j]=INF;
        }
    }
    //vector<vector<int>> dist(N,vector<int>(N));
    warshall_floyd(a);
    /*for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }*/
    int Q;cin >> Q;
    while(Q--){
        long long s,t;cin >> s >> t;
        s--;t--;
        s %= N;t %= N;
        if(a[s][t]==INF)cout << -1 << endl;
        else cout << a[s][t] << endl;
    }
    return 0;
}