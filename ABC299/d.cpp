#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ll N;cin >> N;
    ll left = 0, right = N-1;
    while(abs(right-left)>1){
        ll mid = (left + right) / 2;
        cout << "? " << mid+1 << endl;
        int c;cin >> c;
        if(c==0){
            left = mid;
        }
        if(c==1){
            right = mid;
        }
    }
    cout << "! " << left+1 << endl;
    return 0;
}