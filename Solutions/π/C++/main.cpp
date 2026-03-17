// Problem: π
// Link to the problem: https://atcoder.jp/contests/abc449/tasks/abc449_a
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll d;
    cin >> d;
    const long double pi = 3.141592653589793;
    cout << fixed << setprecision(10) << pi * ((double)d / 2) * ((double)d / 2) << endl;
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