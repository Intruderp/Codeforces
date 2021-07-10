#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC optimize("O3")
#pragma GCC target("avx")
#define vi vector<int>
#define pii pair<int, int>
#define vpii vector<pair<int, int>>
#define F first
#define S second
#define mp map<int, int>
#define ump unordered_map<int, int>
#define ll long long int
#define pb push_back
#define mod 1000000007
#define int long long
#define pr(x)          \
    cout << x << '\n'; \
    return;
#define pry          \
    cout << "YES\n"; \
    return;
#define prn         \
    cout << "NO\n"; \
    return;
#define all(v) v.begin(), v.end()
#define loop(i, x, n) for (int i = x; i < n; i++)
#define rloop(i, n) for (int i = n - 1; i >= 0; i--)
#define test  \
    int t;    \
    cin >> t; \
    while (t--)
using namespace std;
/*************************************************************************************************/
void solve()
{
    int x1, y1, x2, y2, x3, y3, ans;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    ans = abs(x1-x2)+abs(y1-y2);
    if (y1 == y2 and y1==y3)
    {
        if (x1 > x2 and x3 > x2 and x3 < x1)
            ans += 2;
        else if (x2 > x1 and x3 > x1 and x3 < x2)
            ans += 2;
    }
    else if (x1 == x2 and x1==x3)
    {
        if (y1 > y2 and y3 > y2 and y3 < y1)
            ans += 2;
        else if (y2 > y1 and y3 > y1 and y3 < y2)
            ans += 2;
    }
    pr(ans)
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    test
    solve();
    return 0;
}