#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
int main() {
    int N,K;cin >> N >> K;
    vector<int> p(N);
    for(int i=0; i<N; i++){
        cin >> p[i];
    }
    vector<int> x(N,0);
    for(int i=1; i<N; i++){
        if(p[i]>p[i-1])x[i] = x[i-1] + 1;
        else x[i] = 0;
    }
    for(int i=0; i<N; i++){
        if(x[i]==K-1){
            for(int j=0; j<N; j++){
                std::cout << p[j] << " ";
            }
            return 0;
        }
    }
    int z = x[N-K];
    //std::cout << z << endl;
    int num = -1;
    for(int j=z; j>0; j--){
        int m = 1e9;
        for(int i=0; i<z; i++){
            if(m>p[N-1-i])m = p[N-1-i];
        }
        //std::cout << z << " " << m << endl;
        if(p[N-K-z] < m){
            num = N-K-z;
            break;
        }
    }
    //std::cout << z << " " << num << endl;
    if(num==-1){
         sort(p.begin() + N - K, p.end());
    }
    
    else {
        sort(p.begin() + num ,p.begin() + num + K);
    }
    //std::cout << num << " " << num+K << endl;
    for(int i = 0; i < N; i++) {
        std::cout << p[i] << " ";
    }
    return 0;
}