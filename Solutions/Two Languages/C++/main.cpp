// Problem: Two Languages
// Link to the problem: https://atcoder.jp/contests/abc441/tasks/abc441_b
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    string s, t;
    cin >> s;
    vector<ll> sScore(26, 0), tScore(26, 0);
    for (int i = 0; i < s.size(); i++)
    {
        sScore[s[i] - 'a']++;
    }
    cin >> t;
    for (int i = 0; i < t.size(); i++)
    {
        tScore[t[i] - 'a']++;
    }
    ll q;
    cin >> q;
    vector<string> w(q), ans(q);
    for (ll i = 0; i < q; i++)
    {
        cin >> w[i];
        ll scoreX = 0, scoreY = 0;
        for (int j = 0; j < w[i].size(); j++)
        {
            scoreX += (sScore[w[i][j] - 'a']);
            scoreY += (tScore[w[i][j] - 'a']);
        }
        if (scoreX > scoreY)
        {
            ans[i] = "Takahashi";
        }
        else if (scoreX < scoreY)
        {
            ans[i] = "Aoki";
        }
        else
        {
            ans[i] = "Unknown";
        }
    }
    for (ll i = 0; i < q; i++)
    {
        cout << ans[i] << endl;
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    solve();
    return 0;
}