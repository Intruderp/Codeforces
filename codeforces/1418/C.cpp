#include<bits/stdc++.h>
#define vi vector<int>
#define mp map<int,int>
#define ump unordered_map <int,int>
#define ll long long int
#define pb push_back
#define mod 1000000007
#define int long long
#define  loop(i,x,n) for(int i=x;i<n;i++)
#define rloop(i,n) for(int i=n-1;i>=0;i--)
#define test int t; cin>>t; while(t--)
using namespace std;
/*************************************************************************************************/
int dp[200005][5];
int help(int i,int n,int a[],int p)
{
    if(i>=n)
    return 0;
    if(dp[i][p]!=-1)
    return dp[i][p];
    if(p==1)
    {
        if(i+1<n)
        {
            if(a[i]==0 && a[i+1]==0)
            return dp[i][p]=min(help(i+1,n,a,0),help(i+2,n,a,0));
            else if(a[i]==0 && a[i+1]==1)
            return dp[i][p]=min(help(i+1,n,a,0),help(i+2,n,a,0)+1);
            else if(a[i]==1 && a[i+1]==0)
            return dp[i][p]=min(help(i+1,n,a,0)+1,help(i+2,n,a,0)+1);
            else
            return dp[i][p]=min(help(i+1,n,a,0)+1,help(i+2,n,a,0)+2);
        }
        else
        {
            if(a[i]==0)
            return dp[i][p]=help(i+1,n,a,0);
            else 
            return dp[i][p]=1+help(i+1,n,a,0);
        }
    }
    else
    return dp[i][p]=min(help(i+1,n,a,1),help(i+2,n,a,1));
    //return 1e16;
}
void solve()
{
    int n;
    cin>>n;
    int a[n];
    loop(i,0,n)
    cin>>a[i];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<5;j++)
        dp[i][j]=-1;
    }
    cout<<help(0,n,a,1)<<'\n';
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