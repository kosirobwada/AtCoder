#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
int main() {
    int N;cin >> N;
    vector<int> a(N);
    for(int i=0; i<N; i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    for(int i=1; i<N; i++){
        if(a[i]!=a[i-1]+1){
            cout << a[i]-1 << endl;
            return 0;
        }
    }
    return 0;
}