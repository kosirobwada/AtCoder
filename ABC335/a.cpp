#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
int main()
{
    string S;
    cin >> S;
    int N = S.size();
    S[N - 1] = '4';
    cout << S << endl;
    return 0;
}