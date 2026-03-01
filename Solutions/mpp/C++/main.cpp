// Problem: mpp
// Link to the problem: https://atcoder.jp/contests/abc447/tasks/abc447_b
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    unordered_map<char, ll> m;
    for (const char c : s)
    {
        m[c]++;
    }
    ll x = 0;
    for (const pair<char, ll> i : m)
    {
        x = max(x, i.second);
    }
    string ans;
    for (const char c : s)
    {
        if (m[c] != x)
        {
            ans += c;
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