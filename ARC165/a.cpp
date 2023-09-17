#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
// 返り値は {{2, 2}, {5, 1}, {23, 1}}
vector<pair<long long, long long> > prime_factorize(long long N) {
    // 答えを表す可変長配列
    vector<pair<long long, long long> > res;

    // √N まで試し割っていく
    for (long long p = 2; p * p <= N; ++p) {
        // N が p で割り切れないならばスキップ
        if (N % p != 0) {
            continue;
        }

        // N の素因数 p に対する指数を求める
        int e = 0;
        while (N % p == 0) {
            // 指数を 1 増やす
            ++e;

            // N を p で割る
            N /= p;
        }

        // 答えに追加
        res.emplace_back(p, e);
    }

    // 素数が最後に残ることがありうる
    if (N != 1) {
        res.emplace_back(N, 1);
    }
    return res;
}
int main() {
    int T;cin >> T;
    while(T--){
        int N;cin >> N;
        const auto& pf = prime_factorize(N);
        //cout << pf.size() << endl;
        if(pf.size()>=2)cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}