#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("O3")
#pragma GCC target ("avx")
#define vi vector<int>
#define pii pair<int,int>
#define vpii vector<pair<int,int>>
#define F first
#define S second
#define mp map<int,int>
#define ump unordered_map <int,int>
#define ll long long int
#define pb push_back
#define mod 1000000007
#define int long long
#define pr(x) cout<<x<<'\n'; return ;
#define pry  cout<<"YES\n";return ;
#define prn  cout<<"NO\n"; return ;
#define all(v) v.begin(),v.end()
#define  loop(i,x,n) for(int i=x;i<n;i++)
#define rloop(i,n) for(int i=n-1;i>=0;i--)
#define test int t; cin>>t; while(t--)
using namespace std;
/*************************************************************************************************/
int n,m;
char a[1001][1001];
int dp[1001][1001];
int help(int i,int j)
{
    if(i==n and j==m)
    return 1;
    if(i>n || j>m)
    return 0;
    if(dp[i][j]!=-1)
    return dp[i][j];
    if(a[i][j]=='#')
    return 0;
    return dp[i][j]=(help(i+1,j)+help(i,j+1))%mod;
}
void solve()
{
    cin>>n>>m;
    memset(dp,-1,sizeof(dp));
    for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++)
    cin>>a[i][j];
    cout<<help(1,1);
} 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}