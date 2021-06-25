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
bool isSorted(vector<int> &v)
{
    for (int i = 0; i < (int)v.size() - 1; i++)
    {
        if (v[i] > v[i + 1])
            return false;
    }
    return true;
}
void solve()
{
    int n, x;
    cin >> n >> x;
    vi v(n);
    loop(i, 0, n)
    cin >> v[i];
    int ans = 0;
    for(int i=0;i<n;i++)
    {
        if(isSorted(v))
        {
            pr(ans)
        }
        if(v[i]>x)
        {
            swap(v[i],x);
            ans++;
        }
    }
    pr(-1)
    
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