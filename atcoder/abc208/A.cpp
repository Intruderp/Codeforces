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

int x,s;
int a[]={1,2,3,4,5,6};
int dp[1000][10001];
bool help(int i,int s,int t)
{
    if(i>=6 or t>x or s<0)
    return false;
    if(s==0 and t==x)
    return true;
    if(dp[t][s]!=-1)
    return dp[t][s];
    return dp[t][s]=help(i,s-a[i],t+1) || help(i+1,s,t);

}
void solve()
{
    cin>>x>>s;
    memset(dp,-1,sizeof(dp));
    bool ans=help(0,s,0);
    if(ans)
    cout<<"Yes";
    else
    cout<<"No";
} 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}