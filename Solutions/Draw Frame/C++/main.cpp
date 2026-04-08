// Problem: Draw Frame
// Link to the problem: https://atcoder.jp/contests/abc452/tasks/abc452_b
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll h, w;
    cin >> h >> w;
    vector<string> ans(h, string(w, '.'));
    for (ll i = 0; i < h; i++)
    {
        ans[i][0] = '#';
        ans[i][w - 1] = '#';
    }
    for (ll i = 0; i < w; i++)
    {
        ans[0][i] = '#';
        ans[h - 1][i] = '#';
    }
    for (ll i = 0; i < h; i++)
    {
        cout << ans[i] << endl;
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