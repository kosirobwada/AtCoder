#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
int main() {
    int M;cin >> M;
    vector<int> d(M);
    int sum = 0;
    for(int i=0; i<M; i++){
        cin >> d[i];
        sum += d[i];
    }
    int ave = sum / 2;
    int x = ave;
    int s = 0;
    int a=-1,b=-1;
    for(int i=0; i<M; i++){
        ave -= d[i];
        s += d[i];
        if(ave < 0){
            a = i + 1;
            s -= d[i];
            b = x - s + 1;
            cout << a << " " << b << endl;
            return 0;
        }
    }
    return 0;
}