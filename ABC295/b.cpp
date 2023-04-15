#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;cin >> N;
    long long ans = 0;
    map<int,int> mp;
    vector<int> a(N);
    for(int i=0; i<N; i++){
        cin >> a[i];
        mp[a[i]]++;
        if(mp[a[i]]==2){
            mp[a[i]]=0;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}