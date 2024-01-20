#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
int main()
{
    int N;
    cin >> N;
    int a = 0;
    int b = 0;
    for (int i = 0; i < N; i++)
    {
        int x, y;
        cin >> x >> y;
        a += x;
        b += y;
    }
    if (a > b)
    {
        cout << "Takahashi" << endl;
    }
    else if (a == b)
    {
        cout << "Draw" << endl;
    }
    else
    {
        cout << "Aoki" << endl;
    }
    return 0;
}