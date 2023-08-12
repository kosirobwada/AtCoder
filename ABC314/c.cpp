#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
long double PI = 3.1415926535897932;
int main() {
    int N,M;cin >> N >> M;
    string S;cin >> S;
    vector<int> c(N);
    map<int,deque<char>> mp;
    for(int i=0; i<N; i++){
        cin >> c[i];
        mp[c[i]].push_back(S[i]);
    }
    for(auto &v: mp){
        deque<char> dq;
        dq = v.second;
        int x = dq.back();
        dq.pop_back();
        dq.emplace_front(x);
        v.second = dq;
        /*for(auto u: dq){
            cout << u << " ";
        }
        cout << endl;*/
    }
    string T="";
    for(int i=0; i<N; i++){
        int y = c[i];
        char z = mp[c[i]].front();
        T.push_back(z);
        mp[c[i]].pop_front();
    }
    cout << T << endl;
    return 0;
}