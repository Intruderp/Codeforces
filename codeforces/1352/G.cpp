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
    if(n<=3)
    {
        pr(-1);
    }
    if(n==4)
    {
        cout<<"3 1 4 2\n";
        return ;
    }
    vi ans;
    int x=1;
    while(x<=n)
    {
        ans.pb(x);
        x+=2;
    }
    x=x-5;
    ans.pb(x);
    if(n%2==0)
    ans.pb(n);
    ans.pb(x+2);
    x-=2;
    while(x>0)
    {
        ans.pb(x);
        x-=2;
    }
    for(int e:ans)
    cout<<e<<' ';
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