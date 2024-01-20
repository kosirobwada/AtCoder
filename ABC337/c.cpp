#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
int main()
{
    int N;
    cin >> N;
    vector<int> a(N);
    int top = -1;
    map<int, int> mp;
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
        if (a[i] == -1)
        {
            top = i;
            // cout << top + 1 << endl;
        }
        else
        {
            a[i]--;
            mp[a[i]] = i;
        }
    }
    for (int i = 0; i < N; i++)
    {
        // cout << top + 1 << endl;
        cout << top + 1 << " ";
        top = mp[top];
    }
    cout << endl;
    return 0;
}