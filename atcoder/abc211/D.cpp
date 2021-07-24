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
    int n, m, a, b;
    cin >> n >> m;
    vi v[n + 1], dist(n + 1, 1e15), path(n + 1, 0), vis(n + 1, 0);
    loop(i, 0, m)
    {
        cin >> a >> b;
        v[a].pb(b);
        v[b].pb(a);
    }
    path[1] = 1;
    dist[1] = 0;
    vis[1]=1;
    queue<int> q;
    q.push(1);
    while (!q.empty())
    {
        int cur = q.front();
        q.pop();
        for (int child : v[cur])
        {
            if (vis[child] == 0)
            {
                q.push(child);
                vis[child] = 1;
            }
            if (dist[child] > dist[cur] + 1)
            {
                dist[child] = (dist[cur] + 1);
                path[child] = path[cur];
            }
            else if (dist[child] == dist[cur] + 1)
            {
                path[child] = (path[child]%mod + path[cur]%mod) % mod;
            }
        }
    }
    if(dist[n]>INT_MAX)
    {
        pr(0)
    }
    pr(path[n]%mod);
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}