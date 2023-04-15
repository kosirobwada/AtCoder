#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;cin >> N;
    vector<int> a(N);
    for(int i=0; i<N; i++){
        cin >> a[i];
        if(a[i]%2==0)cout << a[i] << ' ';
    }
    cout << endl;
    return 0;
}