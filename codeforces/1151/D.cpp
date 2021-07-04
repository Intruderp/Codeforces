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
bool comp(pii a,pii b)
{
    int x1,x2,y1,y2,d1,d2;
    x1=a.F;
    x2=b.F;
    y1=a.S;
    y2=b.S;
    d1=x1-y1;
    d2=x2-y2;
    return d1>d2;
}
void solve()
{
    int n,ans=0;
    cin>>n;
    vpii v(n);
    loop(i,0,n)
    cin>>v[i].F>>v[i].S;
    sort(all(v),comp);
    for(int i=0;i<n;i++)
    ans+=(v[i].F-v[i].S)*(i)+v[i].S*n-v[i].S;
    pr(ans)
} 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}