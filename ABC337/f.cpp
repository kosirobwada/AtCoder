#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
int main()
{
    int N;
    cin >> N;
    cout << N - 1 << endl;
    for (int i = 0; i < N - 1; i++)
    {
        cout << i + 1 << " ";
        for (int j = 0; j < i + 1; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
    string S;
    cin >> S;
    for (int i = 0; i < N - 1; i++)
    {
        if (S[i] == '1')
        {
            cout << i + 1 << endl;
            return 0;
        }
    }
    cout << N << endl;
    return 0;
}