#include <bits/stdc++.h>
#define vi vector<int>
#define mp map<int, int>
#define ump unordered_map<int, int>
#define ll long long int
#define pb push_back
#define mod 1000000007
#define int long long
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
    int n, k, ans = 0;
    cin >> n >> k;
    map<int, vector<int>> m;
    int a[k];
    loop(i, 0, k)
    {
        cin >> a[i];
        m[a[i]].pb(i + 1);
    }
    for (int i = 1; i <= n; i++)
    {
        if (m.count(i) == 0)
            ans++;
        if (i + 1 <=n)
        {
            bool b = true;
            if (m.count(i) == 0 || m.count(i + 1) == 0)
            {
                ans++;
                b=false;
            }
            if(b==true)
            for (auto it : m[i])
            {
                auto it2 = lower_bound(m[i + 1].begin(), m[i + 1].end(), it);
                if (it2 != m[i + 1].end())
                    b = false;
            }
            if (b)
                ans++;
        }
        if (i - 1 >=1)
        {
            bool b = true;
            if (m.count(i) == 0 || m.count(i - 1) == 0)
            {
                ans++;
                b=false;
            }
            if(b==true)
            for (auto it : m[i])
            {
                auto it2 = lower_bound(m[i - 1].begin(), m[i - 1].end(), it);
                if (it2 != m[i - 1].end())
                    b = false;
            }
            if (b)
                ans++;
        }
    }
    cout << ans;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //test
    solve();
    return 0;
}