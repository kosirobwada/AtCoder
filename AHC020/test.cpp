#include <bits/stdc++.h>
using namespace std;
using ll = long long;
double dis(double x1,double y1,double x2,double y2){
   return sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}
struct edge{
    ll to;
    ll cost;
};
int main() {
    ll N,M,K;cin >> N >> M >> K;
    vector<double> x(N),y(N);
    vector<double> D(N);
    for(int i=0; i<N; i++){
        cin >> x[i] >> y[i];
    }
    map<ll,vector<edge>> G;
    for(int i=0; i<M; i++){
        int u,v,w;cin >> u >> v >> w;
        u--;v--;
        G[u].push_back({v,w});
        G[v].push_back({u,w});
    }
    vector<double> a(K),b(K);
    for(int i=0; i<K; i++){
        cin >> a[i] >> b[i];
    }
    vector<int> id(N,-1);
    for(int i=0; i<N; i++){
        D[i] = 1e9;
        for(int j=0; j<K; j++){
            double d = dis(x[i],y[i],a[j],b[j]);
            if(D[i]>d){
                D[i] = d;
                id[i] = j;
            }
        }
    }
    for(int i=0; i<N; i++){
        if(D[i]>=4998){
            cout << 0 << endl;
        }
        else cout << fixed << std::setprecision(0) << D[i]+1 << " ";
    }
    cout << endl;
    for(int i=0; i<M; i++){
        cout << 1 << " ";
    }
    cout << endl;
    return 0;
}