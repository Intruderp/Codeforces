#include<bits/stdc++.h>
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
#define pr1 cout<<-1<<endl; return ;
#define all(v) v.begin(),v.end()
#define  loop(i,x,n) for(int i=x;i<n;i++)
#define rloop(i,n) for(int i=n-1;i>=0;i--)
#define test int t; cin>>t; while(t--)
using namespace std;
/*************************************************************************************************/
vector<int> v[200001];
int vis[200001];
int x=0;
void dfs(int n)
{
    vis[n]=1;
    x++;
    for(int child:v[n])
    {
        if(vis[child]==0)
        dfs(child);
    }
}
void solve()
{
    int n;
    cin>>n;
    int a[n],i=0,j=n-1;
    loop(i,0,n)
    cin>>a[i];
    while(i<j)
    {
        if(a[i]!=a[j])
        {
            v[a[i]].pb(a[j]);
            v[a[j]].pb(a[i]);
        }
        i++;
        j--;
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        x=0;
        if(vis[a[i]]==0)
        dfs(a[i]);
        if(x>0)
        ans+=x-1;
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