// Problem: Center Alignment
// Link to the problem: https://atcoder.jp/contests/abc445/tasks/abc445_b
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m = 0;
    cin >> n;
    vector<string> s(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> s[i];
        m = max(m, (ll)s[i].size());
    }
    for (ll i = 0; i < n; i++)
    {
        const ll k = (m - s[i].size()) / 2;
        s[i].insert(0, k, '.');
        s[i].append(k, '.');
    }
    for (ll i = 0; i < n - 1; i++)
    {
        cout << s[i] << endl;
    }
    cout << s.back() << endl;
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