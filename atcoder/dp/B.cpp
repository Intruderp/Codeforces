#include<bits/stdc++.h>
using namespace std;
#define int long long
int dp[100005],cost=INT_MAX;
int frog(int a[],int n,int k,int i)
{
    if(i==n)
    return 0;
    if(i>n)
    return INT_MAX;
    if(dp[i]!=-1)
    return dp[i];
    //int cost=INT_MAX;
    cost=abs(a[i+1]-a[i])+frog(a,n,k,i+1);
    for(int j=2;j<=k;j++)
    {
        if(i+j<=n)
        cost=min(cost,(abs(a[i+j]-a[i])+frog(a,n,k,i+j)));
    }
    return dp[i]=cost;
}
signed main()
{
    int n,k;
    cin>>n>>k;
    int a[n+1];
    for(int i=1;i<=n;i++)
        cin>>a[i];
    memset(dp,-1,sizeof(dp));
    cout<<frog(a,n,k,1);
}