// Problem: Insert and Erase A
// Link to the problem: https://atcoder.jp/contests/abc447/tasks/abc447_c
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s, t;
    cin >> s >> t;
    const ll n = s.size(), m = t.size();
    vector<ll> a(26, 0), b(26, 0);
    for (const char c : s)
    {
        a[c - 'A']++;
    }
    for (const char c : t)
    {
        b[c - 'A']++;
    }
    for (ll i = 1; i < 26; i++)
    {
        if (a[i] != b[i])
        {
            cout << -1 << endl;
            return;
        }
    }
    ll ans = 0;
    ll i = 0, j = 0;
    while (i < n || j < m)
    {
        if (i < n && s[i] == 'A')
        {
            if (j < m && t[j] == 'A')
            {
                i++;
                j++;
            }
            else
            {
                i++;
                ans++;
            }
        }
        else if (j < m && t[j] == 'A')
        {
            j++;
            ans++;
        }
        else if (i < n && j < m && s[i] == t[j])
        {
            i++;
            j++;
        }
        else
        {
            cout << -1 << endl;
            return;
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