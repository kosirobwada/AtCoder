#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
int main()
{
    int H, W, K;
    cin >> H >> W >> K;
    vector<vector<char>> S(H, vector<char>(W));
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            cin >> S[i][j];
        }
    }
    int m = 1e9;
    int k = 0, l = 0;
    for (int i = 0; i < H; i++)
    {
        k = 0;
        l = 0;
        for (int j = 0; j < W; j++)
        {
            // cout << k << " ";
            if (S[i][j] == 'x')
            {
                k = 0;
                l = 0;
            }
            if (S[i][j] == 'o')
            {
                l++;
            }
            if (S[i][j] == '.')
            {
                k++;
                l++;
            }
            if (l >= K)
            {
                m = min(m, k);
                if (S[i][j - K + 1] == '.')
                {
                    k--;
                }
                // m = min(m, k);
            }
        }
    }
    for (int i = 0; i < W; i++)
    {
        k = 0;
        l = 0;
        for (int j = 0; j < H; j++)
        {
            if (S[j][i] == 'x')
            {
                k = 0;
                l = 0;
            }
            if (S[j][i] == 'o')
            {
                l++;
            }
            if (S[j][i] == '.')
            {
                k++;
                l++;
            }
            if (l >= K)
            {
                m = min(m, k);
                if (S[j - K + 1][i] == '.')
                {
                    k--;
                }

                // m = min(m, k);
            }
        }
    }
    // cout << endl;
    if (m == 1e9)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << m << endl;
    }
    return 0;
}