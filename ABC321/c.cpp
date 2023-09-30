#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
int main() {
    int K;cin >> K;
    set<ll> st;
    for(int i=1; i<10; i++){
        stack<string> q;
        string x = to_string(i);
        q.push(x);
        st.insert(i);
        while(!q.empty()){
            string y = q.top();
            q.pop();
            ll n = y.size();
            if(n>=10)continue;
            if(y[n-1]=='0'){
                continue;
            }
                for(int j=0; j<y[n-1]-'0'; j++){
                    string m = to_string(j);
                    string z = y + m;
                    q.push(z);
                    if(z.size()<=10){
                        ll l = stoll(z);
                        st.insert(l);
                    }
                }
        }
    }
    /*for(auto v: st){
        cout << v << " ";
    }
    cout << endl;*/
    auto it = st.begin();
    advance(it, K-1);  // 0-based index のため
    ll nth_value = *it;
    cout << nth_value << endl;

    return 0;
}