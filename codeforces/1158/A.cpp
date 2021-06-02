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
void solve()
{
    int n,m,ans=0;
    cin>>n>>m;
    vi b(n),g(m);
    loop(i,0,n)
    cin>>b[i];
    int mx=0,mn=1e18;
    loop(i,0,m)
    {
        cin>>g[i];
        mn=min(mn,g[i]);
        mx=max(mx,g[i]);
    }
    loop(i,0,n)
    {
        if(b[i]>mx || b[i]>mn)
        {
            cout<<-1;
            return ;
        }
    }
    sort(b.rbegin(),b.rend());
    sort(g.begin(),g.end());
    if(binary_search(g.begin(),g.end(),b[0]))
    {
        for(int i=0;i<m;i++)
         ans+=g[i];
        for(int i=1;i<n;i++)
         ans+=b[i]*m;
    }
    else 
    {
        ans+=b[0];
        for(int i=1;i<m;i++)
        ans+=g[i];
        ans+=g[0];
        ans+=b[1]*(m-1);
        for(int i=2;i<n;i++)
        ans+=b[i]*m;
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