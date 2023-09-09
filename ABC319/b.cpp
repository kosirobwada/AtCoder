#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
vector<long long> divisor(long long n) {
    vector<long long> ret;
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            ret.push_back(i);
            if (i * i != n) ret.push_back(n / i);
        }
    }
    sort(ret.begin(), ret.end()); // 昇順に並べる
    return ret;
}
int main() {
    int N;
    cin >> N;
    cout << "1";
    for (int i = 1; i <= N; i++) {
        vector<int> a;
        bool flag = true;
        for (int j = 9; j >= 1; j--) {
            if (N % j != 0) continue;
            if (i % (N / j) == 0) {
                a.push_back(j);
                flag = false;
                //break; // 一つの j が見つかったらループを終了
            }
        }
        if (!flag) {
            cout << a.back(); // 最後に見つかった j を出力
        } else {
            cout << "-";
        }
    }
    cout << endl;
    return 0;
}
