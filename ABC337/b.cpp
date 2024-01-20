#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
int main()
{
    string S;
    cin >> S;
    int N = S.size();
    bool flag = true;
    int cnt = 0;
    for (int i = 0; i < N; i++)
    {
        if (cnt == 0)
        {
            if (S[i] == 'A')
                continue;
            else if (S[i] == 'B')
            {
                cnt++;
            }
            else if (S[i] == 'C')
            {
                cnt += 2;
            }
            else
            {
                cout << "No" << endl;
                return 0;
            }
        }
        if (cnt == 1)
        {
            if (S[i] == 'B')
                continue;
            else if (S[i] == 'C')
            {
                cnt++;
            }
            else
            {
                cout << "No" << endl;
                return 0;
            }
        }
        if (cnt == 2)
        {
            if (S[i] == 'C')
                continue;
            else
            {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}