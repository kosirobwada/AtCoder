#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
long double PI = 3.1415926535897932;
int main() {
    int N;cin >> N;
    string S;cin >> S;
    int Q;cin >> Q;
    vector<int> a(N,-1),b(Q),t(Q);
    int l2=-1,l3=-1;
    for(int i=0; i<Q; i++){
        int x;cin >> t[i] >> x;x--;
        char c;cin >> c;
        if(t[i]==1){
            a[x] = i;
            if(i==0)b[0] = 0;
            else b[i] = b[i-1];
            S[x] = c;
        }
        if(t[i]==2){
            b[i] = 1;
            l2 = i;
        }
        if(t[i]==3){
            b[i] = 2;
            l3 = i;
        }
    }
    int z = b[Q-1];
    string T="";
    /*for(auto v: a){
        cout << v << " ";
    }
    cout << endl;
    cout << l2 << " " << l3 << endl;
    */
    for(int i=0; i<N; i++){
        if(a[i]==-1){
            if(z==0){
                T.push_back(S[i]);
            }
            if(z==1){
                char c = tolower(S[i]);
                T.push_back(c);
            }
            if(z==2){
                char c = toupper(S[i]);
                T.push_back(c);
            }
        }
        else{
            if(z==0){
                T.push_back(S[i]);
            }
            if(z==1){
                if(l2<a[i]){
                    T.push_back(S[i]);
                    continue; 
                }
                char c = tolower(S[i]);
                T.push_back(c);
            }
            if(z==2){
                if(l3<a[i]){
                    T.push_back(S[i]);
                    continue;
                }
                char c = toupper(S[i]);
                T.push_back(c);
            }
        }
    }
    cout << T << endl;
    return 0;
}