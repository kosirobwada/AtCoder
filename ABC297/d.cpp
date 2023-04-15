#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ll A,B;cin >> A >> B;
    ll ans = 0;
    while(1){
        if(A==B)break;
        if(A==1||B==1){
            if(A==1)ans += B/A-1;
            else ans += A/B-1;
            break;
        }
        else if(A>B){
            if(A%B==0){
                ans += A/B-1;
                break;
            }
            ans += A/B;
            A -= (A/B)*B;
        }
        else{
            if(B%A==0){
                ans += B/A-1;
                break;
            }
            ans += B/A;
            B -= (B/A)*A;
        }
        //cout << A << ' ' << B << endl;
    }
    cout << ans << endl;
    return 0;
}