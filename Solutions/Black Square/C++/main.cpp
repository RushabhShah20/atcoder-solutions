// Problem: Black Square
// Link to the problem: https://atcoder.jp/contests/abc441/tasks/abc441_a
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll p, q, x, y;
    cin >> p >> q >> x >> y;
    if ((x <= (99 + p) && y <= (99 + q)) && (x >= p && y >= q))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    solve();
    return 0;
}