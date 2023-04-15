#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;cin >> t;
    while(t--){
        vector<int> a(3);
        cin >> a[0] >> a[1] >> a[2];
        sort(a.begin(),a.end());
        vector<int> c(3);
        c[0]=abs(a[0]-a[1]);
        c[1]=abs(a[1]-a[2]);
        c[2]=abs(a[2]-a[0]);
        sort(c.begin(),c.end());
        int ans = -1 ;
        int x = (c[1]+c[2])/6;
        if((c[1]+c[2])%6==0)ans = (c[1]+c[2])/6;
        if(c[1]%2==1 || c[2]%2==1 || c[0]%2==1)ans = -1;
        cout << ans << endl;
    }
    return 0;
}