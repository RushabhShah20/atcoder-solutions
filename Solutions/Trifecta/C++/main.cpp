// Problem: Trifecta
// Link to the problem: https://atcoder.jp/contests/abc440/tasks/abc440_b
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    for (ll i = 0; i < n; i++)
    {
        ll y;
        cin >> y;
        pq.push(make_pair(y, i + 1));
    }
    for (ll i = 0; i < 3; i++)
    {
        pair<ll, ll> x = pq.top();
        cout << x.second << " ";
        pq.pop();
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    solve();
    return 0;
}