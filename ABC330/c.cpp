#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll D;
    cin >> D;

    ll ans = 2e6; // 絶対値の最小値を保持する変数をLLONG_MAXで初期化

    for (ll x = 0; x * x <= D; x++)
    {
        ll y = sqrt(D - x * x); // y^2 = D - x^2
        ans = min(ans, abs(x * x + y * y - D));
        ans = min(ans, abs(x * x + (y + 1) * (y + 1) - D)); // 補正項も考慮
    }

    cout << ans << endl;

    return 0;
}