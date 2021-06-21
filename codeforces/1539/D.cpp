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
    int n, ans = 0, a, b, req, x, y;
    cin >> n;
    pii p[n];
    loop(i, 0, n)
    cin >>p[i].S>>p[i].F;
    sort(p, p + n);
    int i = 0, j = n - 1, count = 0;
    while (i <= j)
    {
        if (count >= p[i].F)
        {
            ans += p[i].S;
            count += p[i].S;
            i++;
        }
        else
        {
            req = p[i].F - count;
            x = p[j].S;
            if (x > req)
            {
                count += req;
                ans += 2 * (req);
                p[j].S -= req;
            }
            else
            {
                count += p[j].S;
                ans += p[j].S * 2;
                p[j].S = 0;
                j--;
            }
        }
    }
    pr(ans)
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}