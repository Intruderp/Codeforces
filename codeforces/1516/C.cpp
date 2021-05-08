#include <bits/stdc++.h>
#define vi vector<int>
#define ma map<int, int>
#define uma unordered_map<int, int>
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
#define mp make_pair
#define pr pair<int, int>
using namespace std;
/*************************************************************************************************/
int n;
int dp[105][200005];
bool equal(int i, int a[], int s, int j)
{
    if (i == n)
        return false;
    if (s == 0)
        return true;
    if (dp[i][s] != -1)
        return dp[i][s];
    if (s >= a[i] && i != j)
        return dp[i][s] = equal(i + 1, a, s - a[i], j) || equal(i + 1, a, s, j);
    else
        return dp[i][s] = equal(i + 1, a, s, j);
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int sum = 0;
    cin >> n;
    int a[n];
    loop(i, 0, n)
    {
        cin >> a[i];
        sum += a[i];
    }
    memset(dp, -1, sizeof(dp));
    bool b = true;
    if (sum % 2 || !equal(0, a, sum / 2, -1))
        b = false;
    if (!b)
        cout << 0;
    else
    {
        cout << "1\n";
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2)
            {
                cout << i + 1;
                return 0;
            }
        }
        while(true)
        for(int i=0;i<n;i++)
        {
            if (a[i] % 2)
            {
                cout << i + 1;
                return 0;
            }
            a[i]/=2;
        }
    }
    return 0;
}