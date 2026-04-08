// Problem: Fishbones
// Link to the problem: https://atcoder.jp/contests/abc452/tasks/abc452_c
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }
    ll m;
    cin >> m;
    vector<string> s(m);
    vector<vector<vector<bool>>> c(11, vector<vector<bool>>(11, vector<bool>(26, false)));
    for (ll i = 0; i < m; i++)
    {
        cin >> s[i];
        const ll p = s[i].size();
        for (ll j = 0; j < p; j++)
        {
            c[p][j + 1][s[i][j] - 'a'] = true;
        }
    }
    vector<vector<bool>> d(n, vector<bool>(26, false));
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < 26; j++)
        {
            if (c[a[i]][b[i]][j])
            {
                d[i][j] = true;
            }
        }
    }
    for (ll i = 0; i < m; i++)
    {
        if (s[i].length() != n)
        {
            cout << "No" << endl;
            continue;
        }
        bool x = true;
        for (ll j = 0; j < n; j++)
        {
            if (!d[j][s[i][j] - 'a'])
            {
                x = false;
                break;
            }
        }
        if (x)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
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