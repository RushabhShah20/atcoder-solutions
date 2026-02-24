// Problem: Greedy Draft
// Link to the problem: https://atcoder.jp/contests/abc446/tasks/abc446_b
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<bool> seen(m, false);
    for (ll i = 0; i < n; i++)
    {
        ll l;
        cin >> l;
        vector<ll> x(l);
        for (ll j = 0; j < l; j++)
        {
            cin >> x[j];
        }
        ll ans = 0;
        for (ll j = 0; j < l; j++)
        {
            if (!seen[x[j] - 1])
            {
                seen[x[j] - 1] = true;
                ans = x[j];
                break;
            }
        }
        cout << ans << endl;
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