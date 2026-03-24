// Problem: Split Ticketing
// Link to the problem: https://atcoder.jp/contests/abc450/tasks/abc450_b
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<vector<ll>> c(n + 1, vector<ll>(n + 1));
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = i + 1; j <= n; j++)
        {
            cin >> c[i][j];
        }
    }
    for (ll i = 1; i <= n - 2; i++)
    {
        for (ll j = i + 1; j <= n - 1; j++)
        {
            for (ll k = j + 1; k <= n; k++)
            {
                if (c[i][j] + c[j][k] < c[i][k])
                {
                    cout << "Yes" << endl;
                    return;
                }
            }
        }
    }
    cout << "No" << endl;
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