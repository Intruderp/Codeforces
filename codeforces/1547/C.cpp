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
void solve()
{
    int k,n,m;
    cin>>k>>n>>m;
    int a[n],b[m];
    loop(i,0,n)
    cin>>a[i];
    loop(i,0,m)
    cin>>b[i];
    int i=0,j=0;
    vi ans;
    while(i<n and j<m)
    {
        if(a[i]==0)
        {
            ans.pb(0);
            i++;
        }
        else if(b[j]==0)
        {
            ans.pb(0);
            j++;
        }
        else if(a[i]<b[j])
        {
            ans.pb(a[i]);
            i++;
        }
        else 
        {
            ans.pb(b[j]);
            j++;
        }
    }
    while(i<n)
    {
        ans.pb(a[i]);
        i++;
    }
    while(j<m)
    {
        ans.pb(b[j]);
        j++;
    }
    int x=k;
    for(int i=0;i<ans.size();i++)
    {
        if(ans[i]==0)
        x++;
        if(ans[i]>x)
        {
            pr(-1);
        }
    }
    for(int i:ans)
    cout<<i<<' ';
    cout<<'\n';
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