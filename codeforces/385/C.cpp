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
const int sz=1e7;
vi prime;
bool b[sz+1];
int m[sz+1];
vi v(10000000+1,0);
void seive()
{
    b[0]=b[1]=true;
    for(int i=2;i<=sz;i++)
    {
        if(!b[i])
        {
            for(int j=i*i;j<=sz;j+=i)
            b[j]=true;
        }
    }
    for(int i=2;i<=sz;i++)
    {
        if(!b[i])
        prime.pb(i);
    }
    //cout<<prime.size()<<endl;
}
void solve()
{
    int n;
    cin>>n;
    int a[n];
    loop(i,0,n)
    {
        cin>>a[i];
        m[a[i]]++;
    }
    for(int p:prime)
    {
        int x=p;
        while(x<=sz)
        {
            v[p]+=m[x];
            x+=p;
        }
    }
    int q=0,l,r,x=1e7;
    for(int i=0;i<=x;i++)
    {
        q+=v[i];
        v[i]=q;
    }
    cin>>q;
    while(q--)
    {
        cin>>l>>r;
        int ans=0;
        if(r>=x)
        r=x;
        ans+=v[r];
        if(l>=x)
        l=x+1;
        ans-=v[l-1];
        cout<<ans<<'\n';
    }
    

} 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    seive();
    solve();
    return 0;
}