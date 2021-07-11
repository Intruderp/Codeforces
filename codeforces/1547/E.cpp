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
const int inf=1e12;
void solve()
{
    int n,k;
    cin>>n>>k;
    int p[k],t[k],left[n],right[n];
    vi temp(n,inf);
    loop(i,0,k)
    cin>>p[i];
    loop(i,0,k)
    cin>>t[i];
    loop(i,0,k)
    temp[p[i]-1]=t[i];
    loop(i,0,n)
    {
        if(i==0)
        left[i]=min(temp[i],inf);
        else 
        left[i]=min(left[i-1]+1,temp[i]);
    }
    rloop(i,n)
    {
        if(i==n-1)
        right[i]=min(inf,temp[i]);
        else 
        right[i]=min(right[i+1]+1,temp[i]);
    }
    loop(i,0,n)
    cout<<min(left[i],right[i])<<' ';
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