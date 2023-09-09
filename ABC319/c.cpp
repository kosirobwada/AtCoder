#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
int main() {
    vector<int> a(9);
    for(int i=0; i<9; i++){
        a[i] = i;
    }
    vector<int> b(9);
    for(int i=0; i<9; i++){
        cin >> b[i];   
    }
    int x=0,y=0;
    do{
        int x1 = x;
        vector<int> c(9,-1);
        for(int i=0; i<9; i++){
            c[a[i]] = b[a[i]];
            if(a[i]==0){
                if((c[1]!=-1&&c[2]!=-1)&&c[1]==c[2]){
                    if(c[1]!=c[0]){
                        x++;
                        break;
                    }
                }
                if((c[3]!=-1&&c[6]!=-1)&&c[3]==c[6]){
                    if(c[3]!=c[0]){
                        x++;
                        break;
                    }
                }
                if((c[4]!=-1&&c[8]!=-1)&&c[4]==c[8]){
                    if(c[4]!=c[0]){
                        x++;
                        break;
                    }
                }
            }
            if(a[i]==1){
                if((c[2]!=-1&&c[0]!=-1)&&c[2]==c[0]){
                    if(c[1]!=c[0]){
                        x++;
                        break;
                    }
                }
                if((c[4]!=-1&&c[7]!=-1)&&c[4]==c[7]){
                    if(c[1]!=c[4]){
                        x++;
                        break;
                    }
                }
            }
            if(a[i]==2){
                if((c[1]!=-1&&c[0]!=-1)&&c[1]==c[0]){
                    if(c[2]!=c[0]){
                        x++;
                        break;
                    }
                }
                if((c[5]!=-1&&c[8]!=-1)&&c[5]==c[8]){
                    if(c[2]!=c[5]){
                        x++;
                        break;
                    }
                }
                if((c[4]!=-1&&c[6]!=-1)&&c[4]==c[6]){
                    if(c[2]!=c[6]){
                        x++;
                        break;
                    }
                }
            }
            if(a[i]==3){
                if((c[4]!=-1&&c[5]!=-1)&&c[5]==c[4]){
                    if(c[3]!=c[4]){
                        x++;
                        break;
                    }
                }
                if((c[0]!=-1&&c[6]!=-1)&&c[0]==c[6]){
                    if(c[3]!=c[6]){
                        x++;
                        break;
                    }
                }
            }
            if(a[i]==4){
                if((c[5]!=-1&&c[3]!=-1)&&c[5]==c[3]){
                    if(c[4]!=c[5]){
                        x++;
                        break;
                    }
                }
                if((c[7]!=-1&&c[1]!=-1)&&c[7]==c[1]){
                    if(c[4]!=c[7]){
                        x++;
                        break;
                    }
                }
                if((c[0]!=-1&&c[8]!=-1)&&c[0]==c[8]){
                    if(c[4]!=c[0]){
                        x++;
                        break;
                    }
                }
                if((c[6]!=-1&&c[2]!=-1)&&c[6]==c[2]){
                    if(c[4]!=c[2]){
                        x++;
                        break;
                    }
                }
            }
            if(a[i]==5){
                if((c[2]!=-1&&c[8]!=-1)&&c[2]==c[8]){
                    if(c[5]!=c[2]){
                        x++;
                        break;
                    }
                }
                if((c[4]!=-1&&c[3]!=-1)&&c[4]==c[3]){
                    if(c[5]!=c[4]){
                        x++;
                        break;
                    }
                }
            }
            if(a[i]==6){
                if((c[0]!=-1&&c[3]!=-1)&&c[0]==c[3]){
                    if(c[6]!=c[0]){
                        x++;
                        break;
                    }
                }
                if((c[7]!=-1&&c[8]!=-1)&&c[7]==c[8]){
                    if(c[6]!=c[7]){
                        x++;
                        break;
                    }
                }
                if((c[4]!=-1&&c[2]!=-1)&&c[4]==c[2]){
                    if(c[6]!=c[2]){
                        x++;
                        break;
                    }
                }
            }
            if(a[i]==7){
                if((c[6]!=-1&&c[8]!=-1)&&c[6]==c[8]){
                    if(c[6]!=c[7]){
                        x++;
                        break;
                    }
                }
                if((c[4]!=-1&&c[1]!=-1)&&c[4]==c[1]){
                    if(c[7]!=c[4]){
                        x++;
                        break;
                    }
                }
            }
            if(a[i]==8){
                if((c[0]!=-1&&c[4]!=-1)&&c[0]==c[4]){
                    if(c[8]!=c[0]){
                        x++;
                        break;
                    }
                }
                if((c[7]!=-1&&c[6]!=-1)&&c[7]==c[6]){
                    if(c[8]!=c[7]){
                        x++;
                        break;
                    }
                }
                if((c[5]!=-1&&c[2]!=-1)&&c[5]==c[2]){
                    if(c[8]!=c[2]){
                        x++;
                        break;
                    }
                }
            }
        }
        if(x1==x)y++;
    }while(next_permutation(a.begin(),a.end()));
    //cout << x << " " << y << endl;
    double t = (double)y/(x+y);
    std::cout << fixed << setprecision(15) << t << endl;
    return 0;
}