#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int N;cin >> N;
    vector<int> a(3*N);
    for(int i=0; i<3*N; i++){
        cin >> a[i];
        a[i]--;
    }
    map<int,int> mp;
    vector<int> f(N,0);
    vector<int> b(3*N,0);
    for(int i=0; i<3*N; i++){
        mp[a[i]]++;
        if(mp[a[i]]==2){
            f[a[i]] = i;
            b[i] = a[i];
        }
        //cout << f[a[i]] << " ";
    }
    //cout << endl;
    /*for(int i=0; i<N; i++){
        cout << f[i]+1 << " ";
    }
    cout << endl;*/
    sort(f.begin(),f.end());
    for(int i=0; i<N; i++){
        cout << b[f[i]]+1 << " ";
    }
    cout << endl;
    return 0;
}