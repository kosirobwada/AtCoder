#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int M = static_cast<int>(ceil(log2(N)));
    cout << M << endl;

    for (int i = 0; i < M; ++i)
    {
        vector<int> juices;
        for (int j = 1; j <= N; ++j)
        {
            if (((j - 1) >> i) & 1)
            {
                juices.push_back(j);
            }
        }
        cout << juices.size();
        for (int juice : juices)
        {
            cout << " " << juice;
        }
        cout << endl;
    }

    string response;
    cin >> response;

    int rottenJuice = 0;
    for (int i = 0; i < M; ++i)
    {
        if (response[i] == '1')
        {
            rottenJuice |= (1 << i);
        }
    }

    cout << rottenJuice + 1 << endl;
    return 0;
}
