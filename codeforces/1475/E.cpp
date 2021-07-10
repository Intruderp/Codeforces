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
int moduloInverse(int x)
{
    int n=mod-2,ans=1;
    while(n)
    {
        if(n%2)
        ans=(ans*x)%mod;
        x=(x*x)%mod;
        n/=2;
    }
    return ans;
}
int ncr(int n,int r)
{
    int ans=1;
    int x=1,y=1,z=1;
    for(int i=1;i<=n;i++)
    x=(x*i)%mod;
    for(int i=1;i<=r;i++)
    y=(y*i)%mod;
    for(int i=1;i<=(n-r);i++)
    z=(z*i)%mod;
    ans=(ans*x*moduloInverse(y))%mod;
    ans=(ans*moduloInverse(z))%mod;
    return ans;
}
void solve()
{
    int n,k,x=0,y=0,ans=1;
    cin>>n>>k;
    int a[n];
    loop(i,0,n)
    cin>>a[i];
    sort(a,a+n);
    reverse(a,a+n);
    loop(i,0,n)
    {
        if(a[i]==a[k-1])
        x++;
        else 
        if(a[i]>a[k-1])
        y++;
    }
    int r=k-y;
    cout<<ncr(x,r)<<'\n';
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