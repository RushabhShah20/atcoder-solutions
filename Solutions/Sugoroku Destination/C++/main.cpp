// Problem: Sugoroku Destination
// Link to the problem: https://atcoder.jp/contests/abc445/tasks/abc445_c
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void deepest(const ll u, vector<bool> &visited, vector<ll> &maxDist, vector<ll> &deepestNode, const vector<vector<ll>> &adj)
{
    visited[u] = true;
    maxDist[u] = 0;
    deepestNode[u] = u;
    for (const ll v : adj[u])
    {
        if (!visited[v])
        {
            deepest(v, visited, maxDist, deepestNode, adj);
        }
        if (1 + maxDist[v] > maxDist[u])
        {
            maxDist[u] = 1 + maxDist[v];
            deepestNode[u] = deepestNode[v];
        }
    }
}

void solve()
{
    ll n;
    cin >> n;
    vector<vector<ll>> adj(n);
    vector<ll> maxDist(n, -1), ans(n, -1);
    vector<bool> visited(n, false);
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        adj[i].push_back(x - 1);
    }
    for (ll i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            deepest(i, visited, maxDist, ans, adj);
        }
    }
    for (ll i = 0; i < n; i++)
    {
        cout << ans[i] + 1 << " ";
    }
    cout << endl;
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