// Problem: Max Straight
// Link to the problem: https://atcoder.jp/contests/abc446/tasks/abc446_d
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    unordered_map<ll, ll> dp;
    ll ans = 1;
    for (ll i = 0; i < n; ++i)
    {
        if (dp.count(a[i] - 1) > 0)
        {
            dp[a[i]] = 1 + dp[a[i] - 1];
        }
        else
        {
            dp[a[i]] = 1;
        }
        ans = max(ans, dp[a[i]]);
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