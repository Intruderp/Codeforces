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

int power(int a,int n)
{
    int ans=1;
    while(n)
    {
        if(n%2)
        ans=(ans*a)%mod;
        a=(a*a)%mod;
        n/=2;
    }
    return ans;
}
void dfs(int n,vector<int> v[],int vis[])
{
    vis[n]=1;
    for(int child:v[n])
    {
        if(vis[child]==0)
        dfs(child,v,vis);
    }
}
void solve()
{
    int e;
    cin>>e;
    int a[e],b[e];
    vector<int> v[e+1];
    int vis[e+1]={0};
    loop(i,0,e)
    cin>>a[i];
    loop(i,0,e)
    cin>>b[i];
    loop(i,0,e)
    {
        v[a[i]].pb(b[i]);
        v[b[i]].pb(a[i]);
    }
    int cc=0;
    for(int i=1;i<=e;i++)
    {
        if(vis[i]==0)
        dfs(i,v,vis),cc++;
    }
    cout<<power(2,cc)<<'\n';
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