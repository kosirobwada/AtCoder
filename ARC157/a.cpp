#include <bits/stdc++.h>
using namespace std;
int main() {
    int N,A,B,C,D;cin >> N >> A >> B >> C >> D;
    bool flag = false;
    if((B>0 || C>0) && (B==C || B-C==1 || C-B==1))flag = true;
    else if(A>0 && B==0 && C==0 && D==0)flag = true;
    else if(A==0 && B==0 && C==0 && D>0)flag = true;
    else if(A==0 && B==0 && C==0 && D==0)flag = true;
    if(flag)cout << "Yes" << endl;
    else cout << "No" << endl;
   return 0;
}