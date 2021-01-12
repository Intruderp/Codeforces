#include<bits/stdc++.h>
using namespace std;
int dp[100005];
int frog(int h[],int n,int i)
{
    if(i==n)
    return 0;
    if(i>n)
    return INT_MAX;
    if(dp[i]!=-1)
    return dp[i];
    int cost=abs(h[i]-h[i+1])+frog(h,n,i+1);
    if(i+2<=n)
    {
      cost=min(cost,(abs(h[i]-h[i+2])+frog(h,n,i+2)));
    }
    return dp[i]=cost;
}

int main()
{
    int n,i=1;
    cin>>n;
    int h[n+1];
    memset(dp,-1,sizeof(dp));
    for(int i=1;i<=n;i++)
        cin>>h[i];
    cout<<frog(h,n,i);
    return 0;
}