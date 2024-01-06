#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
int main()
{
    int N, L;
    cin >> N >> L;
    vector<int> a(N);
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    int ans = 0;
    for (int i = 0; i < N; i++)
    {
        if (a[i] >= L)
            ans++;
    }
    cout << ans << endl;
    return 0;
}