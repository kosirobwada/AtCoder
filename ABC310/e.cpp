#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
int main() {
    int N;cin >> N;
    string S;cin >> S;
    int cnt = 0;
    ull ans = 0;
    int fi = 0;
    for(int i=0; i<N; i++){
        if(S[i]=='0'){
            ans += i;
            cnt = 0;
            //cout << i << " " << ans << endl;
            continue;
        }
        ans++;
        cnt++;
        if(i==0){
            //cout << i << " " << ans << endl;
            continue;
        }
        if(S[i-1]=='0'){
            ans ++;
            fi = i;
            //cout << i << " " << cnt << " " <<  ans << endl;
            continue;
        }
        if(cnt%2==1){
            if(fi!=0)ans += (cnt/2+1);
            if(fi==0)ans += (cnt/2);
        }
        if(cnt%2==0){
            if(fi!=0)ans += (fi-1+(cnt-1)/2);
            if(fi==0)ans += (cnt-1)/2;
        }
        //cout << i << " " << cnt << " " << fi << " " << ans << endl;
    }
    cout << ans << endl;
    return 0;
}