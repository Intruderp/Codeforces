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
int n,k,z;
int dp[100000][6];
int help(int i,int m,int l,int c,int a[])
{
    if(i>=n or l>z or c>=2)                         //   invalid states
    return INT_MIN;
    if(m==k)
    return 0;
    if(dp[i][l]!=-1)
    return dp[i][l];
    if(i==0)
    return dp[i][l]=help(i+1,m+1,l,0,a)+a[1];
    else 
    return dp[i][l]=max(help(i+1,m+1,l,0,a)+a[i+1],help(i-1,m+1,l+1,c+1,a)+a[i-1]);

}
void solve()
{
    cin>>n>>k>>z;
    int a[n];
    loop(i,0,n)
    cin>>a[i];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<6;j++)
        dp[i][j]=-1;
    }
    cout<<help(0,0,0,0,a)+a[0]<<'\n';
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