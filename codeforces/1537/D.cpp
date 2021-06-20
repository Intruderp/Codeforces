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
//#define int long long
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
string a="Alice\n",b="Bob\n";
bool isPrime(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}
void solve()
{
    int n;
    cin>>n;
    double d=log2(n);
    if(d-floor(d)==0)
    {
        if((int)d%2 || n==1)
        {
            cout<<b;
            return ;
        }
        else
        {
            cout<<a;
            return ;
        }
    }
    if(isPrime(n) || n==1)
    {
        cout<<b;
        return ;
    }
    if(n%2)
    cout<<b;
    else 
    cout<<a;
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