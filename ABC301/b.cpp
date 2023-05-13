#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int N;cin >> N;
    vector<int> a(N);
    for(int i=0; i<N; i++){
        cin >> a[i];
    }
    queue<int> q;
    q.push(a[0]);
    for(int i=1; i<N; i++){
        if(a[i]-a[i-1]>1){
            for(int j=a[i-1]+1; j<=a[i]; j++){
                q.push(j);
            }
        }
        else if(a[i-1]-a[i]>1){
            for(int j=a[i-1]-1; j>=a[i]; j--){
                q.push(j);
            }
        }
        else {
            q.push(a[i]);
        }
    }
    while(!q.empty()){
        int x = q.front();
        q.pop();
        cout << x << " " ;
    }
    cout << endl;
    return 0;
}