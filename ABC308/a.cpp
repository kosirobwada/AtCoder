#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
int main() {
    int N=8;
    vector<int> a(N);
    bool flag = true;
    for(int i=0; i<N; i++){
        cin >> a[i];
        if(a[i]%25!=0)flag=false;
        if(a[i]<100 || a[i]>675)flag=false;
        if(i==0)continue;
        if(a[i-1]>a[i])flag=false;
    }
    if(flag)cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}