// Problem: Happy Number
// Link to the problem: https://atcoder.jp/contests/abc439/tasks/abc439_b
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    set<ll> s;
    while (s.find(n) == s.end())
    {
        s.insert(n);
        ll sum = 0;
        while (n > 0)
        {
            sum += (pow(n % 10, 2));
            n /= 10;
        }
        n = sum;
    }
    if (*s.begin() == 1)
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
