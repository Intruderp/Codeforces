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
    int n,x,k,req;
    vi v;
    cin>>n>>k>>x;
    int a[n];
    loop(i,0,n)
    cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n-1;i++)
    {
        int d=a[i+1]-a[i];
        req=d/x;
        if(d%x==0)
        req--;
        if(req>0)
        v.pb(req);
    }
    sort(all(v));
    int i=0;
    n=v.size();
    while(k>0)
    {
        //cout<<k<<' '<<
        if(i==v.size())
        break;
        req=v[i];
        if(req<=k)
        {
            k=k-req;
            i++;
        }
        else 
        break;
        //cout<<i<<' '<<k<<endl;
       
    }
    //cout<<"i "<<i<<endl;
    cout<<n-i+1<<'\n';
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