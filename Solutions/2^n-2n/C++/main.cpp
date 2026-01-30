// Problem: 2^n - 2*n
// Link to the problem: https://atcoder.jp/contests/abc439/tasks/abc439_a
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    const ll ans = pow(2, n) - (2 * n);
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    solve();
    return 0;
}