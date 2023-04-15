#include <bits/stdc++.h>
using namespace std;
using Graph = map<int,vector<int>>;
using ll = long long;
using P = pair<int,int>;
const int INF = 1e9;
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define rep(i,a,b) for(int i=int(a);i<int(b);++i)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

int main() {
    int N;cin >> N;
    vector<int> a(N+10);
    rep(i,0,N)cin >> a[i];
    int M;cin >> M;
    vector<bool> b(101010,false);
    rep(i,0,M){
        int y;cin >> y;
        b[y]=true;
    }
    int X;cin >> X;
    vector<bool> dp(X+100,false);
    dp[0]=true;
    for(int i=0; i<=X+10; i++){
        for(int j=0; j<N; j++){
            if(i+a[j]>101010)continue;
            if(dp[i]==true && b[i+a[j]]==false){
                dp[i+a[j]]=true;
                if(dp[X]){
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "No" << endl;
   return 0;
}