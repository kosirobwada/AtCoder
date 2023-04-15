#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int N;
    cin >> N;
    int Q;
    cin >> Q;

    map<int, multiset<int>> st;
    map<int, set<int>> mst;

    while (Q--) {
        int T;
        cin >> T;

        if (T == 1) {
            int i, j;
            cin >> i >> j;
            st[j].insert(i);
            mst[i].insert(j);
        }

        if (T == 2) {
            int i;
            cin >> i;

            for (int x : st[i]) {
                cout << x << ' ';
            }
            cout << endl;
        }

        if (T == 3) {
            int j;
            cin >> j;

            for (int x : mst[j]) {
                cout << x << ' ';
            }
            cout << endl;
        }
    }

    return 0;
}
