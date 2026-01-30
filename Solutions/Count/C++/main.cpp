// Problem: Count .
// Link to the problem: https://atcoder.jp/contests/abc442/tasks/abc442_a
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    ll ans = 0;
    for (const char c : s)
    {
        if (c == 'i' || c == 'j')
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