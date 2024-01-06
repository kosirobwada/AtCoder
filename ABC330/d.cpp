#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
int main()
{
    int N;
    cin >> N;
    vector<vector<char>> S(N, vector<char>(N));
    vector<int> a(N), b(N);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> S[i][j];
            if (S[i][j] == 'o')
                a[i]++;
        }
    }
    for (int j = 0; j < N; j++)
    {
        for (int i = 0; i < N; i++)
        {
            if (S[i][j] == 'o')
                b[j]++;
        }
    }
    ll ans = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (S[i][j] != 'o')
                continue;
            ans += (a[i] - 1) * (b[j] - 1);
        }
    }
    cout << ans << endl;
    return 0;
}