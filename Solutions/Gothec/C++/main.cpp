// Problem: Gothec
// Link to the problem: https://atcoder.jp/contests/abc452/tasks/abc452_a
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll m, d;
    cin >> m >> d;
    if ((m == 1 && d == 7) || (m == 3 & d == 3) || (m == 5 && d == 5) || (m == 7 && d == 7) || (m == 9 && d == 9))
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
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}