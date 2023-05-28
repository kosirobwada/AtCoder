#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ll T;cin >> T;
    while(T--){
        ll ans = -1;
        ll N;cin >> N;
        if(N<7){
            cout << ans << endl;
            continue;
        }
        if(N==10 || N==8 || N==9){
            cout << 7 << endl;
            continue;
        }
        bitset<64> bs(N);
        int cnt = bs.count();
        if(cnt==3){
            cout << N << endl;
            continue;
        }
        if(cnt>3){
            int sum = 0;
            bool flag=false;
            for(int i=bs.size()-1; i>=0; i--){
                if(bs[i]==1)sum++;
                if(flag){
                    if(bs[i]==1)bs.reset(i);
                }
                if(sum==3){
                    flag = true;
                    sum ++;
                }
            }
            ans = bs.to_ullong();
            cout << ans << endl;
            continue;
        }
        if(cnt==1){
            bool flag = false;
            int sum = 0;
            for(int i=bs.size()-1; i>=0; i--){
                if(bs[i]==1){
                    flag = true;
                    bs[i]=0;
                    continue;
                }
                if(flag){
                    sum++;
                    bs[i]=1;
                }
                if(sum==3)break;
            }
            ans = bs.to_ullong();
            cout << ans << endl;
            continue;
        }
        if(cnt==2){
            bool flag1=false,flag2=false;
            int sum = 0;int x = -1;
            for(int i=bs.size()-1; i>=0; i--){
                if(bs[i]==1){
                    if(flag1==false){
                        flag1=true;
                        x = i;
                    }
                    else{
                        flag2=true;
                        if(i==1 || i==0){
                            bs[i]=0;
                            bs[x]=0;bs[x-1]=1;bs[x-2]=1;bs[x-3]=1;
                            ans = bs.to_ullong();
                            cout << ans << endl;
                            break;
                        }
                        bs[i]=0;
                        continue;
                    }
                }
                if(flag2==true){
                    bs[i]=1;
                    sum++;
                }
                if(sum==2){
                    ans = bs.to_ullong();
                    cout << ans << endl;
                    break;
                }
            }
            
            continue;
        }
    }
    return 0;
}