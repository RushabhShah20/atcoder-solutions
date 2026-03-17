// Problem: Deconstruct Chocolate
// Link to the problem: https://atcoder.jp/contests/abc449/tasks/abc449_b
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll h, w, q;
    cin >> h >> w >> q;
    for (ll i = 0; i < q; i++)
    {
        ll x, ans;
        cin >> x;
        if (x == 1)
        {
            ll r;
            cin >> r;
            ans = r * w;
            h -= r;
        }
        else
        {
            ll c;
            cin >> c;
            ans = c * h;
            w -= c;
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