// Problem: Chokutter Addiction
// Link to the problem: https://atcoder.jp/contests/abc443/tasks/abc443_c
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, t;
    cin >> n >> t;
    ll ans = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x >= y)
        {
            ans += (x - y);
            y = x + 100;
        }
    }
    if (t > y)
    {
        ans += (t - y);
    }
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    solve();
    return 0;
}