#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
using namespace atcoder;
using ll = long long;
double dis(double x1,double y1,double x2,double y2){
   return sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}
int main() {
    int N;double D;cin >> N >> D;
    vector<double> x(N),y(N);
    for(int i=0; i<N; i++){
        cin >> x[i] >> y[i];
    }
    vector<bool> flag(N,false);
    flag[0] = true;
    dsu uf(N);
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(i==j)continue;
            double q = dis(x[i],y[i],x[j],y[j]);
            if(q<=D){
                uf.merge(i,j);
            }
        }
    }
    int id = uf.leader(0);
    for(int i=0; i<N; i++){
        if(uf.leader(i)==id)cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}