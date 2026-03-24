// Problem: Minimize Range
// Link to the problem: https://atcoder.jp/contests/abc450/tasks/abc450_d
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    set<ll> s;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        s.insert(x % k);
    }
    const ll m = s.size();
    if (m == 1)
    {
        cout << 0 << endl;
        return;
    }
    const vector<ll> v(s.begin(), s.end());
    ll ans = v[m - 1] - v[0];
    for (ll i = 0; i < m - 1; i++)
    {
        const ll y = v[i] + k - v[i + 1];
        ans = min(ans, y);
    }
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}