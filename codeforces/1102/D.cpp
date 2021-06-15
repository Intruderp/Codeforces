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
#define int long long
#define pr1             \
    cout << -1 << endl; \
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
    int n, c = 0, c1 = 0, c2 = 0;
    cin >> n;
    string s;
    cin >> s;
    loop(i, 0, n)
    {
        c += s[i] == '0';
        c1 += s[i] == '1';
        c2 += s[i] == '2';
    }
    if (c1 == n / 3 and c2 == n / 3)
    {
        cout << s;
        return;
    }
    if (c != n / 3 and c1 != n / 3 and c2 != n / 3)
    {
        int x, y, z;
        if (c > n / 3)
        {
            x = c - n / 3;
            y = n / 3 - c1;
            z = n / 3 - c2;
            for (int i = n - 1; i >= 0; i--)
            {
                if (x == 0)
                    break;
                if (s[i] == '0')
                {
                    if (z > 0)
                    {
                        s[i] = '2';
                        c2++;
                        z--;
                    }
                    else
                    {
                        s[i] = '1';
                        c1++;
                    }
                    x--;
                    c--;
                }
            }
        }
        if (c1 > n / 3)
        {
            x = c1 - n / 3;
            y = (c2 - n / 3) * (-1);
            z = (c - n / 3) * (-1);
            for (int i = 0; i < n; i++)
            {
                if (x == 0)
                    break;
                if (s[i] == '1')
                {
                    if (z > 0)
                    {
                        s[i] = '0';
                        c++;
                        z--;
                        c1--;
                        x--;
                    }
                }
            }
            for (int i = n - 1; i >= 0; i--)
            {
                if (x == 0)
                    break;
                if (s[i] == '1')
                {
                    s[i] = '2';
                    x--;
                    c1--;
                    c2++;
                }
            }
        }
        if (c2 > n / 3)
        {
            x = c2 - n / 3;
            y = (c1 - n / 3) * (-1);
            z = (c - n / 3) * (-1);
            for (int i = 0; i < n; i++)
            {
                if (x == 0)
                    break;
                if (s[i] == '2')
                {
                    if (z > 0)
                    {
                        s[i] = '0';
                        c++;
                        z--;
                    }
                    else
                    {
                        s[i] = '1';
                        c1++;
                    }
                    x--;
                    c2--;
                }
            }
        }

        cout << s;
        return;
    }
    if (c == n / 3)
    {
        int x;
        if (c2 > n / 3)
        {
            x = c2 - n / 3;
            for (int i = 0; i < n; i++)
            {
                if (x == 0)
                    break;
                if (s[i] == '2')
                {
                    s[i] = '1';
                    x--;
                }
            }
        }
        else
        {
            x = c1 - n / 3;
            for (int i = n - 1; i >= 0; i--)
            {
                if (x == 0)
                    break;
                if (s[i] == '1')
                {
                    s[i] = '2';
                    x--;
                }
            }
        }
        cout << s;
        return;
    }
    if (c1 == n / 3)
    {
        int x;
        if (c > n / 3)
        {
            x = c - n / 3;
            for (int i = n - 1; i >= 0; i--)
            {
                if (x == 0)
                    break;
                if (s[i] == '0')
                {
                    s[i] = '2';
                    x--;
                }
            }
        }
        else
        {
            x = c2 - n / 3;
            for (int i = 0; i < n; i++)
            {
                if (x == 0)
                    break;
                if (s[i] == '2')
                {
                    s[i] = '0';
                    x--;
                }
            }
        }
        cout << s;
        return;
    }
    if (c2 == n / 3)
    {
        int x;
        if (c > n / 3)
        {
            x = c - n / 3;
            for (int i = n - 1; i >= 0; i--)
            {
                if (x == 0)
                    break;
                if (s[i] == '0')
                {
                    s[i] = '1';
                    x--;
                }
            }
        }
        else
        {
            x = c1 - n / 3;
            for (int i = 0; i < n; i++)
            {
                if (x == 0)
                    break;
                if (s[i] == '1')
                {
                    s[i] = '0';
                    x--;
                }
            }
        }
        cout << s;
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