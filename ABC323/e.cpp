#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll N; cin >> N;
    map<ll, ll> mp;
    priority_queue<ll, vector<ll>, greater<ll>> q;

    for (int i = 0; i < N; i++) {
        ll s, c;
        cin >> s >> c;
        if (mp.find(s) != mp.end()) {
            mp[s] += c;
        } else {
            mp[s] = c;
            q.push(s);
        }
    }

    ll ans = 0;
    while (!q.empty()) {
        ll size = q.top(); q.pop();
        ll count = mp[size];

        // ペアが奇数の場合、1つのスライムが残ります
        if (count % 2 == 1) {
            ans++;
            count--;
        }

        ll newSize = size * 2;
        ll newCount = count / 2;

        if (newCount > 0) {
            if (mp.find(newSize) != mp.end()) {
                mp[newSize] += newCount;
            } else {
                mp[newSize] = newCount;
                q.push(newSize);
            }
        }
    }

    cout << ans << endl;
    return 0;
}
