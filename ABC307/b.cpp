#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
int main() {
    int N;cin >> N;
    vector<string> S(N);
    for(int i=0; i<N; i++){
        cin >> S[i];
    }
    bool flag = false;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(i==j)continue;
            string T = S[i];
            T += S[j];
            bool f2 = true;
            int X = T.size();
            for(int k=0; k<X; k++){
                if(T[k]!=T[X-k-1])f2 = false;
            }
            if(f2)flag = true;
        }
    }
    if(flag)cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}