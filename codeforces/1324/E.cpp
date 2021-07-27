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
int n,h,l,r;
int a[2000],dp[2001][2001];
int help(int i,int x)
{
    if(i==n)
    return 0;
    if(dp[i][x]!=-1)
    return dp[i][x];
    int o1=0,o2=0,z1,z2;
    z1=(x+a[i])%h;
    if(z1>=l and z1<=r)
    o1=1;
    z2=(x+a[i]-1)%h;
    if(z2>=l and z2<=r)
    o2=1;
    return dp[i][x]=max(help(i+1,z1)+o1,help(i+1,z2)+o2);
}
void solve()
{
    cin>>n>>h>>l>>r;
    loop(i,0,n)
    cin>>a[i];
    memset(dp,-1,sizeof(dp));
    cout<<help(0,0);
} 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}