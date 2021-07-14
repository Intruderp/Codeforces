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
    string s;
    cin >> s;
    int n = s.length(), x = 0, y = 0, x1 = 0, y1 = 0, a, b;
    vpii v;
    loop(i, 0, n)
    {
        if (s[i] == 'R')
            x1++;
        else if (s[i] == 'L')
            x1--;
        else if (s[i] == 'U')
            y1++;
        else
            y1--;
        v.pb({x1, y1});
    }
    for (auto it : v)
    {
        a = it.first;
        b = it.second;
        x1= 0, y1 = 0;
        loop(i, 0, n)
        {
            int t1=x1, t2=y1;
            if (s[i] == 'R')
                t1++;
            else if (s[i] == 'L')
                t1--;
            else if (s[i] == 'U')
                t2++;
            else
                t2--;
            if(t1==a and t2==b)
            continue;
            x1=t1,y1=t2;
        }
        if(x1==0 and y1==0)
        {
            x=a;
            y=b;
            break;
        }
    }
    cout<<x<<' '<<y<<'\n';
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