// Problem: Pepper Addiction
// Link to the problem: https://atcoder.jp/contests/abc448/tasks/abc448_b
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n), b(n), c(m);
    for (ll i = 0; i < m; i++)
    {
        cin >> c[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        if (c[a[i] - 1] >= b[i])
        {
            c[a[i] - 1] -= b[i];
            ans += b[i];
        }
        else
        {
            ans += c[a[i] - 1];
            c[a[i] - 1] = 0;
        }
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