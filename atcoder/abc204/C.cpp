#include<bits/stdc++.h>
#define vi vector<int>
#define mp map<int,int>
#define ump unordered_map <int,int>
#define ll long long int
#define pb push_back
#define mod 1000000007
#define int long long
#define  loop(i,x,n) for(int i=x;i<n;i++)
#define rloop(i,n) for(int i=n-1;i>=0;i--)
#define test int t; cin>>t; while(t--)
using namespace std;
/*************************************************************************************************/
void dfs(int vis[],int n,vector<int> v[])
{
    vis[n]=1;
    for(int child:v[n])
    {
        if(vis[child]==0)
        dfs(vis,child,v);
    }
}

void solve()
{
    int n,m,x,y;
    cin>>n>>m;
    vector<int> v[n+1];
    loop(i,0,m)
    {
        cin>>x>>y;
        v[x].pb(y);
    }
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        int vis[n+1]={0};
        dfs(vis,i,v);
        for(int i:vis)
        {
            if(i)
            ans++;
        }
    }
    cout<<ans;
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