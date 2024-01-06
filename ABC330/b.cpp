#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
int main()
{
    int N, L, R;
    cin >> N >> L >> R;
    vector<int> a(N);
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    vector<int> b(N);
    for (int i = 0; i < N; i++)
    {
        if (a[i] <= L)
        {
            b[i] = L;
        }
        else if (a[i] <= R)
        {
            b[i] = a[i];
        }
        else
        {
            b[i] = R;
        }
    }
    for (int i = 0; i < N; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
    return 0;
}