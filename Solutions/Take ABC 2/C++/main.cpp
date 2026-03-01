// Problem: Take ABC 2
// Link to the problem: https://atcoder.jp/contests/abc447/tasks/abc447_d
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    ll x = 0, y = 0, ans = 0;
    for (const char c : s)
    {
        if (c == 'A')
        {
            x++;
        }
        else if (c == 'B')
        {
            if (x > 0)
            {
                y++;
                x--;
            }
        }
        else
        {
            if (y > 0)
            {
                y--;
                ans++;
            }
        }
    }
    cout << ans << endl;
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