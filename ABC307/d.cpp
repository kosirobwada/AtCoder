#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
int main() {
    int N;cin >> N;
    string S;cin >> S;
    int cnt = 0;
    deque<char> st;
    for(int i=0; i<N; i++){
        if(S[i]=='(')cnt++;
        if(S[i]!=')'){
            st.push_back(S[i]);
        }
        else{
            if(cnt>0){
                while(!st.empty()){
                    char c = st.back();
                    st.pop_back();
                    if(c == '(')break;
                }
                cnt--;
            }
            else{
                st.push_back(S[i]);
            }

        }
    }
    int T = st.size();
    for(int i=0; i<T; i++){
        char c = st.front();
        st.pop_front();
        cout << c ;
    }
    cout << endl;
    return 0;
}