// Problem: Personnel Change
// Link to the problem: https://atcoder.jp/contests/abc451/tasks/abc451_b
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> ans(m);
    for (ll i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        ans[a - 1]--;
        ans[b - 1]++;
    }
    for (ll i = 0; i < m; i++)
    {
        cout << ans[i] << endl;
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