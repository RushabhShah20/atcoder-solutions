// Problem: Music Player
// Link to the problem: https://atcoder.jp/contests/abc442/tasks/abc442_b
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    bool play = false;
    ll vol = 0;
    vector<bool> b(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 1)
        {
            vol++;
        }
        else if (a[i] == 2)
        {
            if (vol >= 1)
            {
                vol--;
            }
        }
        else
        {
            play = !play;
        }
        if (vol >= 3 && play == true)
        {
            b[i] = true;
        }
        else
        {
            b[i] = false;
        }
    }
    for (ll i = 0; i < n; i++)
    {
        if (b[i] == true)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    solve();
    return 0;
}