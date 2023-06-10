#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int N;cin >> N;
    vector<int> a(N);
    vector<ll> S(N,0);
    for(int i=0; i<N; i++){
        cin >> a[i];
        if(i%2==0 && i!=0){
            S[i/2] = (a[i] - a[i-1]) + S[i/2-1];
        }
    }
    int Q;cin >> Q;
    while(Q--){
        int l,r;cin >> l >> r;
        int ans = 0;
        auto x = lower_bound(a.begin(),a.end(),l);
        auto y = lower_bound(a.begin(),a.end(),r);
        int xc = lower_bound(a.begin(),a.end(),l)-a.begin();
        int yc = lower_bound(a.begin(),a.end(),r)-a.begin();
        if(xc%2==0&&yc%2==0){
            y--;
            yc-=2;
            int yy = yc/2;
            int xx = xc/2;
            ans = *x-l + -*y+r + (S[yy]-S[xx]);
        }
        if(xc%2==0&&yc%2==1){
            yc--;
            int yy = yc/2;
            int xx = xc/2;
            ans = -l+*x + (S[yy]-S[xx]);
        }
        if(xc%2==1&&yc%2==0){
            y--;
            yc-=2;xc--;
            int xx = xc/2;
            int yy = yc/2;
            ans = r-*y + (S[yy]-S[xx]);
        }
        if(xc%2==1&&yc%2==1){
            yc--;xc--;
            int xx = xc/2;
            int yy = yc/2;
            ans = (S[yy]-S[xx]);
        }
        //cout << *x << " " << *y << " " << xc << " " << yc << endl;
        cout << ans << endl;
    }
    return 0;
}