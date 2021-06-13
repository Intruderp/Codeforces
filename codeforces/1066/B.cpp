#include <bits/stdc++.h>
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
    int n, r, ans = 0, x;
    cin >> n >> r;
    int a[n];
    loop(i, 0, n)
            cin >>
        a[i];
    loop(i, 0, n)
    {
        if (a[i] == 0)
        {
            x = -1;
            for (int j = i + 1; j < min(n, i + r); j++)
            {
                //cout<<j<<' '<<i<<endl;
                if (a[j] == 1)
                    x = j;
            }
            if (x != -1)
            {
                for (int j = x; j < min(n, x + r); j++)
                {
                    if (a[j] == 0)
                        a[j] = 2;
                }
                for (int j = x; j >= max(0, x - r + 1); j--)
                {
                    if (a[j] == 0)
                        a[j] = 2;
                }
            }
            else
            {
                for (int j = i - 1; j >= max(0, i - r + 1); j--)
                {
                    if (a[j] == 1)
                        x = j;
                }
                for (int j = x; j < min(n, x + r); j++)
                {
                    if (a[j] == 0)
                        a[j] = 2;
                }
                for (int j = x; j >= max(0, x - r + 1); j--)
                {
                    if (a[j] == 0)
                        a[j] = 2;
                }
            }
            if (x == -1)
            {
                cout << "-1\n";
                return;
            }
            ans++;
        }
    }
    ans = 1;
    x = -1;
    for (int i = 0; i < min(n,r); i++)
    {
        if (a[i] == 1)
            x = i;
    }
    x += r;
    int i = x;
    while (i < n)
    {
        x = -1;
        //cout<<i<<endl;
        for (int j = i; j < min(n, i + r); j++)
        {
            if (a[j] == 1)
                x = j;
        }
        if (x != -1)
            i = x + r;
        else
        {
            for (int j = i; j >= max(0, i - r + 1); j--)
            {
                if (a[j] == 1)
                {
                    x = j;
                    break;
                }
            }
            // cout<<"in "<<x<<endl;
            i = x + r;
        }
        //cout<<"end"<<i<<endl;
        ans++;
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