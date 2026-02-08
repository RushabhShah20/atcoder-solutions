// Problem: Digit Sum
// Link to the problem: https://atcoder.jp/contests/abc444/tasks/abc444_b
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll ans = 0;
    for (ll i = 1; i <= n; i++)
    {
        ll sum = 0, x = i;
        while (x > 0)
        {
            sum += x % 10;
            x /= 10;
        }
        if (sum == k)
        {
            ans++;
        }
    }
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    solve();
    return 0;
}