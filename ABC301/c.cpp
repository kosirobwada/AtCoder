#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    string S,T;cin >> S >> T;
    int N = S.size();
    map<char,int> mp1,mp2,s1,s2;
    for(int i=0; i<N; i++){
        mp1[S[i]]++;mp2[T[i]]++;
    }
    bool flag = true;
    for(auto itr=mp1.begin();itr!=mp1.end(); itr++){
        if(itr->first=='@')continue;
        else if(itr->first=='a'||itr->first=='t'||itr->first=='c'||itr->first=='o'||itr->first=='d'||itr->first=='e'||itr->first=='r'){
            char x = itr->first;
            if(mp1[x]==mp2[x])continue;
            if(mp1[x]>mp2[x]){
                s1[x]=(mp1[x]-mp2[x]);
            }
        }
        else{
            char x = itr->first;
            if(mp1[x]==mp2[x])continue;
            else flag = false;
        }
    }
    for(auto itr=mp2.begin();itr!=mp2.end(); itr++){
        if(itr->first=='@')continue;
        else if(itr->first=='a'||itr->first=='t'||itr->first=='c'||itr->first=='o'||itr->first=='d'||itr->first=='e'||itr->first=='r'){
            char x = itr->first;
            if(mp1[x]==mp2[x])continue;
            if(mp2[x]>mp1[x]){
                s2[x]=(mp2[x]-mp1[x]);
            }
        }
        else{
            char x = itr->first;
            if(mp1[x]==mp2[x])continue;
            else flag = false;
        }
    }
    int z1=0,z2=0;
    int m1=0,m2=0;
    for(auto itr=s1.begin();itr!=s1.end(); itr++){
        z1 += itr->second;
        if(itr->second>m1)m1=itr->second;
    }
    for(auto itr=s2.begin();itr!=s2.end(); itr++){
        z2 += itr->second;
        if(itr->second>m2)m2=itr->second;
    }
    if((z1+mp1['@'])!=(z2+mp2['@'])){
        flag = false;
    }
    if(m1>mp2['@']||m2>mp1['@'])flag=false;
    if(flag)cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}