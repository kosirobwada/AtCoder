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
    if(N==1){
        cout << 0 << endl;
        return 0; 
    }
    int x = a[0];
    sort(a.begin(),a.end());
    if(x==a[N-1]){
        if(x==a[N-2]){
            cout << 1 << endl;
            return 0;
        }
        cout << 0 << endl;
        return 0;
    }
    else{
        cout << a[N-1] - x + 1 << endl;
    }
    return 0;
}