#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
int main() {
    int N,M;cin >> N >> M;
    vector<int> a(M);
    for(int i=0; i<M; i++){
        cin >> a[i];
    }
    vector<vector<char>> S(N,vector<char>(M));
    vector<int> score(N,0);
    map<int,vector<int>> mp;
    for(int i=0; i<N; i++){
        score[i] = i + 1;
        for(int j=0; j<M; j++){
            cin >> S[i][j];
            if(S[i][j]=='o'){
                score[i] += a[j];
            }
            else{
                mp[i].push_back(a[j]);
            }
        }
    }
    int max = -1,index = -1;
    for(int i=0; i<N; i++){
        if(score[i] > max){
            max = score[i];
            index = i;
        }
        
    }
    for(int i=0; i<N; i++){
        int ans = 0;
        if(i==index){
            cout << 0 << endl;
        }
        else{
            sort(mp[i].begin(),mp[i].end());
            reverse(mp[i].begin(),mp[i].end());
            for(auto v: mp[i]){
                score[i] += v;
                ans++;
                if(score[i] > max){
                    cout << ans << endl;
                    break;
                }
            }
        }
    }
    return 0;
}