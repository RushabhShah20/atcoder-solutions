// Problem: Peer Review
// Link to the problem: https://atcoder.jp/contests/abc442/tasks/abc442_c
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a(m), b(m);
    vector<vector<ll>> adj(n);
    for (ll i = 0; i < m; i++)
    {
        cin >> a[i] >> b[i];
        adj[a[i] - 1].push_back(b[i] - 1);
        adj[b[i] - 1].push_back(a[i] - 1);
    }
    vector<ll> ans(n);
    for (ll i = 0; i < n; i++)
    {
        const ll x = n - adj[i].size() - 1;
        ans[i] = x * (x - 1) * (x - 2) / 6;
    }
    for (ll i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    solve();
    return 0;
}