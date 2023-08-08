#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
int main() {
    set<string> st;
    st.insert("ACE");
    st.insert("BDF");
    st.insert("CEG");
    st.insert("DFA");
    st.insert("EGB");
    st.insert("FAC");
    st.insert("GBD");
    string S;cin >> S;
    if(st.count(S)){
        cout << "Yes" << endl;
    }
    else cout << "No" << endl;
    return 0;
}