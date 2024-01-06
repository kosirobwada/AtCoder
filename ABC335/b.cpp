#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
int main()
{
    int N;
    cin >> N;
    for (int i = 0; i <= N; i++)
    {
        for (int j = 0; j <= N; j++)
        {
            for (int k = 0; k <= N; k++)
            {
                if (i + j + k <= N)
                {
                    cout << i << ' ' << j << ' ' << k << endl;
                }
            }
        }
    }
    return 0;
}