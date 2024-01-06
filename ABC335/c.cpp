#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
int main()
{
    int N, Q;
    cin >> N >> Q;
    vector<int> x(N + Q), y(N + Q);
    for (int i = 0; i < N; i++)
    {
        x[i] = N - i;
        y[i] = 0;
    }
    int T = N;
    while (Q--)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            char c;
            cin >> c;
            if (c == 'R')
            {
                x[T] = x[T - 1] + 1;
                y[T] = y[T - 1];
            }
            if (c == 'L')
            {
                x[T] = x[T - 1] - 1;
                y[T] = y[T - 1];
            }
            if (c == 'U')
            {
                y[T] = y[T - 1] + 1;
                x[T] = x[T - 1];
            }
            if (c == 'D')
            {
                y[T] = y[T - 1] - 1;
                x[T] = x[T - 1];
            }
            T++;
        }
        if (t == 2)
        {
            int m;
            cin >> m;
            m--;
            cout << x[T - 1 - m] << ' ' << y[T - 1 - m] << endl;
        }
    }
    return 0;
}