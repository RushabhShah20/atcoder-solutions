// Problem: Puddles
// Link to the problem: https://atcoder.jp/contests/abc450/tasks/abc450_c
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

class DisjointSet
{
public:
    vector<ll> parent, rank;
    DisjointSet(const ll n)
    {
        parent.resize(n);
        rank.resize(n, 0);
        for (ll i = 0; i < n; i++)
        {
            parent[i] = i;
        }
    }

    ll find(const ll node)
    {
        if (parent[node] == node)
        {
            return node;
        }
        return parent[node] = find(parent[node]);
    }

    void unionByRank(const ll u, const ll v)
    {
        const ll pu = find(u);
        const ll pv = find(v);
        if (pu == pv)
        {
            return;
        }
        if (rank[pu] < rank[pv])
        {
            parent[pu] = pv;
        }
        else if (rank[pu] > rank[pv])
        {
            parent[pv] = pu;
        }
        else
        {
            parent[pv] = pu;
            rank[pu]++;
        }
    }
};

void solve()
{
    ll h, w;
    cin >> h >> w;
    vector<string> s(h);
    for (ll i = 0; i < h; i++)
    {
        cin >> s[i];
    }
    DisjointSet ds(h * w);
    for (ll i = 0; i < h; i++)
    {
        for (ll j = 0; j < w; j++)
        {
            if (s[i][j] == '#')
            {
                continue;
            }
            const ll x = i * w + j;
            if (j + 1 < w && s[i][j + 1] == '.')
            {
                ds.unionByRank(x, i * w + (j + 1));
            }
            if (i + 1 < h && s[i + 1][j] == '.')
            {
                ds.unionByRank(x, (i + 1) * w + j);
            }
        }
    }
    vector<bool> y(h * w, false);
    for (ll i = 0; i < h; i++)
    {
        for (ll j = 0; j < w; j++)
        {
            if (s[i][j] == '.')
            {
                if (i == 0 || i == h - 1 || j == 0 || j == w - 1)
                {
                    y[ds.find(i * w + j)] = true;
                }
            }
        }
    }
    set<ll> t;
    for (ll i = 0; i < h; i++)
    {
        for (ll j = 0; j < w; j++)
        {
            if (s[i][j] == '.')
            {
                ll root = ds.find(i * w + j);
                if (!y[root])
                {
                    t.insert(root);
                }
            }
        }
    }
    const ll ans = t.size();
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