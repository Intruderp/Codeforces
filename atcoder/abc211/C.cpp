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
string s1,s2;
int n,m;
int dp[100001][9];
int help(int i,int j)
{
    if(j==m or (i==n and j==m))
    return 1;
    if(i==n)
    return 0;
    if(dp[i][j]!=-1)
    return dp[i][j];
    if(s1[i]==s2[j])
    return dp[i][j]=(help(i+1,j+1)%mod+help(i+1,j)%mod)%mod;
    else
    return dp[i][j]=help(i+1,j)%mod;
}
void solve()
{
    cin>>s1;
    n=s1.length();
    s2="chokudai";
    m=s2.length();
    memset(dp,-1,sizeof(dp));
    cout<<help(0,0)%mod;
} 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}