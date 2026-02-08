// Problem: Setsubun
// Link to the problem: https://atcoder.jp/contests/abc443/tasks/abc443_b
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll ans = 0;
    while (k > 0)
    {
        k -= n;
        n++;
        ans++;
    }
    ans--;
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    solve();
    return 0;
}