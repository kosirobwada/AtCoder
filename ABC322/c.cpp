#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
int main() {
    int N,M;cin >> N >> M;
    vector<int> a(M);
    for(int i=0; i<M; i++){
        cin >> a[i];a[i]--;
    }
    int j = 0;
    for(int i=0; i<N; i++){
        if(i==a[j]){
            j++;
            cout << 0 << endl;
        } 
        else{
            cout << a[j] - i << endl;
        }
    }
    return 0;
}