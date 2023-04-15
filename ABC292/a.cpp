#include <bits/stdc++.h>
using namespace std;
int main() {
        string S;cin >> S;
        int N = S.size();
        for(int i=0; i<N; i++){
                S[i] = S[i] - 'a' + 'A';
        }
        cout << S << endl;
        return 0;
}