#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;cin >> N;
    vector<int> a(5*N);
    for(int i=0; i<5*N; i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    double sum = 0;
    for(int i=N; i<4*N; i++){
        sum += a[i];
    }
    double ans = (double)sum/(3*N);
    printf("%.7lf\n",ans);
   return 0;
}