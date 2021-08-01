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
const int sz = 1e6;
int a[sz], b[sz], n, k;
bool check(int i, int x)
{
    int c = b[x];
    if (i > 0)
        c -= b[i - 1];
    return c <= k;
}
void solve()
{
    cin >> n >> k;
    int x = 0, ans = 0;
    loop(i, 0, n)
    {
        cin >> a[i];
        if (a[i] == 0)
            x++;
        b[i] = x;
    }
    loop(i, 0, n)
    {
        int l = i, h = n - 1, mid;
        while (h >= l)
        {
            mid = (h + l) / 2;
            if (check(i, mid))
            {
                ans = max(ans, mid - i + 1);
                l = mid + 1;
            }
            else
                h = mid - 1;
        }
    }
    cout << ans << '\n';
    x = 0;
    loop(i, 0, n)
    {
        int l = i, h = n - 1, mid;
        while (h >= l)
        {
            mid = (h + l) / 2;
            if (check(i, mid))
            {
                x = max(x, mid - i + 1);
                l = mid + 1;
            }
            else
                h = mid - 1;
        }
        if (x == ans)
        {
            for (int j = i; j < i + ans; j++)
                a[j] = 1;
            for (int j = 0; j < n; j++)
                cout << a[j] << ' ';
            return;
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}