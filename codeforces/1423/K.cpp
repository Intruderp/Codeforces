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
int n=1e6;
bool prime[1000000+1];
vi v(1000000+1,0);
vi ps;
void seive()
{
    for(int i=2;i*i<=n;i++)
    {
        if(!prime[i])
        {
            for(int j=i*i;j<=n;j+=i)
            prime[j]=true;
        }
    }
    int x=0;
    for(int i=1;i<=n;i++)
    {
        if(!prime[i])
        x++;
        v[i]=x;
    }
    x=2;
    while(x*x<=n)
    {
        if(prime[x])
        {
            x++;
            continue;
        }
        ps.pb(x*x);
        x++;
    }
} 
void solve()
{
    cin>>n;
    int ans=0;
    auto it=lower_bound(all(ps),n);
    if(it==ps.end() or *it>n)
    it--;
    ans=v[n]-(it-ps.begin()+1);
    pr(ans)
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    seive();
    test
    solve();
    return 0;
}