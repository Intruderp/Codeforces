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
int sum(vi &v,int k)
{
    int ans=0;
    for(int i=0;i<k;i++)
    ans+=v[i];
    return ans;
}
void solve()
{
    int n,k,ans=1e15;
    cin>>n>>k;
    int a[n];
    loop(i,0,n)
    cin>>a[i];
    vector<vector<int>> m(200000+1);
    loop(i,0,n)
    {
        int c=0,x=0;
        x=a[i];
        while(x)
        {
            m[x].pb(c);
            x/=2;
            c++;
        }
    }
    for(int i=0;i<=200000;i++)
    {
        if(m[i].size()>=k)
        {
            sort(m[i].begin(),m[i].end());
            int x;
            x=sum(m[i],k);
            ans=min(ans,x);
        }
    }
    pr(ans);

} 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}