#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
int main()
{
    int N;
    cin >> N;
    vector<vector<int>> a(N, vector<int>(N, -1));
    int m = 0;
    int i = 0, j = 0;
    int k = 1;
    a[0][0] = 0;
    for (int t = 0; t <= N * N * N; t++)
    {
        if (m == 0)
        {
            if (i + 1 >= N)
            {
                m = 1;
            }
            else if (a[i + 1][j] != -1)
            {
                m = 1;
            }
            else
            {
                a[i + 1][j] = k;
                i++;
                k++;
            }
        }
        if (m == 1)
        {
            if (j + 1 >= N)
            {
                m = 2;
            }
            else if (a[i][j + 1] != -1)
            {
                m = 2;
            }
            else
            {
                a[i][j + 1] = k;
                j++;
                k++;
            }
        }
        if (m == 2)
        {
            if (i - 1 < 0)
            {
                m = 3;
            }
            else if (a[i - 1][j] != -1)
            {
                m = 3;
            }
            else
            {
                a[i - 1][j] = k;
                i--;
                k++;
            }
        }
        if (m == 3)
        {
            if (j - 1 < 0)
            {
                m = 0;
            }
            else if (a[i][j - 1] != -1)
            {
                m = 0;
            }
            else
            {
                a[i][j - 1] = k;
                j--;
                k++;
            }
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == (N - 1) / 2 && j == (N - 1) / 2)
            {
                cout << 'T' << " ";
            }
            else
            {
                cout << a[i][j] + 1 << " ";
            }
        }
        cout << endl;
    }
    return 0;
}