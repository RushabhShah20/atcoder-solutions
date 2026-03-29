// Problem: Understory
// Link to the problem: https://atcoder.jp/contests/abc451/tasks/abc451_c
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, ans = 0;
    cin >> n;
    map<ll, ll> m;
    for (ll i = 0; i < n; i++)
    {
        ll x, h;
        cin >> x;
        if (x == 1)
        {
            cin >> h;
            m[h]++;
            ans++;
        }
        else
        {
            cin >> h;
            while (!m.empty())
            {
                const ll y = m.begin()->first;
                if (y <= h)
                {
                    ans -= m[y];
                    m.erase(y);
                }
                else
                {
                    break;
                }
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