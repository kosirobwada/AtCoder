#include <bits/stdc++.h>
using namespace std;
int main() {
    double A,B,ans;cin >> A >> B;
    if(A>B)swap(A,B);
    if(B>2*A/sqrt(3))ans = 2*A/sqrt(3);
    else ans = 2*sqrt(A*A+B*B-sqrt(3)*A*B);
    printf("%.12lf\n",ans);
    return 0;
}