#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int N;cin >> N;
    vector<int> a(N);
    for(int i=0; i<N; i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    bool flag = true;
    vector<int> b(N,-1);
    int j = 0;
    for(int i=0; i<N; i+=2){
        b[i] = a[j];
        j++; 
    }
    for(int i=1; i<N; i+=2){
        b[i] = a[j];
        j++;
    }
    /*for(int i=0; i<N; i++){
        cout << b[i] << " ";
    }
    cout << endl;*/
    for(int i=1; i<N; i+=2){
        if(b[i-1]<b[i] && b[i]>b[i+1])continue;
        flag=false;
    }
    if(flag)cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}