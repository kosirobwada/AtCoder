#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
int main() {
    int HA,WA,HB,WB,HX,WX;
    vector<vector<char>> A(HA,vector<char>(WA));
    vector<vector<char>> B(HB,vector<char>(WB));
    vector<vector<char>> X(HX,vector<char>(WX));
    cin >> HA >> WA;
    for(int i=0; i<HA; i++){
        for(int j=0; j<WA; j++){
            cin >> A[i][j];
        }
    }
    cin >> HB >> WB;
    for(int i=0; i<HB; i++){
        for(int j=0; j<WB; j++){
            cin >> B[i][j];
        }
    }
    cin >> HX >> WX;
    for(int i=0; i<HX; i++){
        for(int j=0; j<WX; j++){
            cin >> X[i][j];
        }
    }
    bool flag = false;
    for(int bit=0; bit<(1<<HA); bit++){
        bool f2 = true;
        for(int msk=0; msk<(1<<WA); msk++){
            
        }
    }
    return 0;
}