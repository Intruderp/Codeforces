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
//#define double long double
using namespace std;
/*************************************************************************************************/
int n;
long double a[3000];
long double dp[3001][3001];
long double help(int i,int h,int t)
{
    if(i==n)
    {
        if(h>n/2)
        return 1;
        else 
        return 0;
    }
    if(dp[h][t]!=20)
    return dp[h][t];
    return dp[h][t]=help(i+1,h+1,t)*a[i]+help(i+1,h,t+1)*(1-a[i]);
}
void solve()
{
    cin>>n;
    loop(i,0,n)
    cin>>a[i];
    for(int i=0;i<=3000;i++)
    for(int j=0;j<=3000;j++)
    dp[i][j]=20;
    cout<<fixed<<setprecision(10)<<help(0,0,0);
} 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}