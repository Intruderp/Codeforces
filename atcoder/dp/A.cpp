#include<bits/stdc++.h>
using namespace std;
int dp[100005];
int frog(int h[],int n,int i)
{
    if(i==n)
    return 0;
    if(dp[i]!=-1)
    return dp[i];
    int cost=(abs(h[i+1]-h[i])+frog(h,n,i+1));
    //dp[]
    if(i+2<=n)
    {
        cost=min((abs(h[i+2]-h[i])+frog(h,n,i+2)),cost);
    }
    //else if(i+1<n)
   
    return dp[i]=cost;
}

int main()
{
    int n,i=0;
    cin>>n;
    int h[n+1];
    memset(dp,-1,sizeof(dp));
    for(int i=1;i<=n;i++)
        cin>>h[i];
    cout<<frog(h,n,1);
    return 0;
}