#include <bits/stdc++.h>
using namespace std;
using Graph = map<int,vector<int>>;
int main() {
    int N,M;cin >> N >> M;
    vector<int> p(N+1);
    for(int i=1; i<=N; i++){
        p[i]=i;
    }
    vector<int> a(M);
    int st,end;bool flag = false;
    for(int i=0; i<M; i++){
        cin >> a[i];
    }
    for(int i=0; i<M; i++){
        if(flag){
            if(a[i]+1==a[i+1])continue;
            else {
                reverse(p.begin()+st,p.begin()+a[i]+2);
                flag = false;
            }
        }
        else{
            if(a[i]+1==a[i+1]){
                st = a[i];
                flag = true;
            }
            else swap(p[a[i]],p[a[i]+1]);
        }
    }
    for(int i=1; i<=N; i++){
        cout << p[i] << ' ';
    }
    cout << endl;
   return 0;
}