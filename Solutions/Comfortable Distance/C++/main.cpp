// Problem: Comfortable Distance
// Link to the problem: https://atcoder.jp/contests/abc449/tasks/abc449_c
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

ll count(const vector<ll> &a, const ll k)
{
    if (k < 0)
    {
        return 0;
    }
    ll count = 0;
    const ll n = a.size();
    ll r = 0;
    for (ll l = 0; l < n; ++l)
    {
        while (r < n && a[r] - a[l] <= k)
        {
            r++;
        }
        if (r > l)
        {
            count += (r - 1 - l);
        }
    }
    return count;
}

void solve()
{
    ll n, l, r, ans = 0;
    cin >> n >> l >> r;
    string s;
    cin >> s;
    vector<vector<ll>> a(26);
    for (ll i = 0; i < n; i++)
    {
        a[s[i] - 'a'].push_back(i);
    }
    for (ll i = 0; i < 26; i++)
    {
        ans += (count(a[i], r) - count(a[i], l - 1));
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