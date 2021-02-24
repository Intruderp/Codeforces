#include<bits/stdc++.h>
#define vi vector<int>
#define mp map<int,int>
#define ump unordered_map <int,int>
#define ll long long int
#define pb push_back
#define mod 1000000007
//#define int long long
#define  loop(i,x,n) for(int i=x;i<n;i++)
#define rloop(i,n) for(int i=n-1;i>=0;i--)
using namespace std;
/*************************************************************************************************/
int x,y,z,m=INT_MIN;
int dp[4005];
int count(int n)
{
    if(n==0)
    return 0;
    if(dp[n]!=-1)
    return dp[n];
    int x1=m,y1=m,z1=m;
    if(x<=n)
    x1=count(n-x);
    if(y<=n)
    y1=count(n-y);
    if(z<=n)
    z1=count(n-z);
    return dp[n]=max({x1,y1,z1})+1;
}
                                                                                                   
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n>>x>>y>>z;
    memset(dp,-1,sizeof(dp));
    cout<<count(n);
    return 0;
}