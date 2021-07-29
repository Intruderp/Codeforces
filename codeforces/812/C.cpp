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
int n,p;
int a[100000],price=0;
bool check(int x)
{
    int cost=0;
    vi v;
    loop(i,0,n)
    v.pb(a[i]+(i+1)*(x+1));
    sort(all(v));
    loop(i,0,x+1)
    cost+=v[i];
    price=cost;
   // cout<<cost<<endl;
    return cost<=p;
}
void solve()
{
    cin>>n>>p;
    loop(i,0,n)
    cin>>a[i];
    int l=0,h=n-1,ans=-1,mid;
    while(h>=l)
    {
        mid=(h+l)/2;
        if(check(mid))
        {
            ans=mid;
           // cout<<"ans "<<ans<<endl;
            l=mid+1;
        }
        else
        h=mid-1;
    }
    check(ans);
    cout<<ans+1<<' '<<price;
    
} 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}