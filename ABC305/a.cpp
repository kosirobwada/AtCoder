#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int N;cin >> N;
    int x = N%5;
    if(x<=2){
        cout << N-x << endl;
    }
    else{
        cout << N+(5-x) << endl;
    }
    return 0;
}