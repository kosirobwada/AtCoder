#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int INF = 1e9;
int main() {
    int N;cin >> N;
    vector<int> p(N*2,INF);
    for(int i=0; i<N; i++){
        cin >> p[i];
        p[i]--;
    }
    int tmp = 0;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(p[i]>p[j])tmp++;
        }
    }
    /*if(tmp%2!=0){
        cout << "No" << endl;
        return 0;
    }*/
    int ans = 0;
    int cnt = 0;
    vector<int> b(N*2,INF);
    vector<int> a1(2e6,0),a2(2e6,0);
    b = p;sort(b.begin(),b.end());
    while(ans<=2e3){
        if(b==p)break;
        if(p[cnt]==cnt){
            cnt++;
            continue;
        }
        if(p[N-1]==cnt){
            int t1,t2;
            t1=p[cnt];t2=p[cnt+1];
            p.erase(p.begin()+cnt);
            p.erase(p.begin()+cnt);
            p.insert(p.begin()+N-2,t1);
            p.insert(p.begin()+N-1,t2);
            a1[ans]=cnt+1;
            a2[ans]=N-2;
            ans++;
        }
        else{
            int x = 0;
            for(int i=cnt; i<N; i++){
                if(p[i]==cnt){
                    x = i;
                    break;
                }
            }
            int t1,t2;
            t1=p[x];t2=p[x+1];
            p.erase(p.begin()+x);
            p.erase(p.begin()+x);
            p.insert(p.begin()+cnt,t1);
            p.insert(p.begin()+cnt+1,t2);
            a1[ans]=x+1;
            a2[ans]=cnt;
            ans++;
        }
    }
    if(ans>2e3-1){
        cout << "No" << endl;
        return 0;
    } 
    cout << "Yes" << endl;
    cout << ans << endl;
    for(int i=0; i<ans; i++){
        cout << a1[i] << " " << a2[i] << endl;
    }
    return 0;
}