#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
int main() {
    int N;cin >> N;
    vector<string> S(N);
    map<string,int> mp;
    for(int i=0; i<N; i++){
        cin >> S[i];
        string T =S[i];
        reverse(S[i].begin(),S[i].end());
        if(S[i]<=T)mp[S[i]]++;
        else mp[T]++;
    }
    cout << mp.size() << endl;
    return 0;
}