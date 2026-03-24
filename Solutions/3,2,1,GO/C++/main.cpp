// Problem: 3,2,1,GO
// Link to the problem: https://atcoder.jp/contests/abc450/tasks/abc450_a
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    for (ll i = n; i >= 2; i--)
    {
        cout << i << ",";
    }
    cout << 1 << endl;
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