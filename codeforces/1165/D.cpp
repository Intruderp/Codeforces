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
    int n;
    cin>>n;
    vi a(n),v;
    loop(i,0,n)
    cin>>a[i];
    sort(all(a));
    int l=a[0]*a[n-1];
    for(int i=2;i*i<=l;i++)
    {
        if(l%i==0)
        {
            v.pb(i);
            if(l/i!=i)
            v.pb(l/i);
        }
    }
    sort(all(v));
    if(a==v)
    cout<<l<<'\n';
    else 
    cout<<"-1\n";
    
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