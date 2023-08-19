#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
int main() {
    string S;cin >> S;
    int N = S.size();
    set<char> c;
    c.insert('a');
    c.insert('i');
    c.insert('u');
    c.insert('e');
    c.insert('o');
    string T = "";
    for(int i=0; i<N; i++){
        if(!c.count(S[i])){
            T.push_back(S[i]);
        }
    }
    cout << T << endl;
    return 0;
}