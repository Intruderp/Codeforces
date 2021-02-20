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
using namespace std;
/*************************************************************************************************/
int dp[100000+5][5];
int h1[100000+1],h2[100000];
int re(int n,int f)
{
    if(n==0)
    return 0;
    if(dp[n][f]!=-1)
    return dp[n][f];
    if(f==0)
    {
        return dp[n][f]=max(h1[n-1]+re(n-1,1),max(h2[n-1]+re(n-1,2),re(n-1,0)));
    }
    else if(f==1)
    {
        return dp[n][f]=max(h2[n-1]+re(n-1,2),re(n-1,0));
    }
    else if(f==2)
    return dp[n][f]=max(h1[n-1]+re(n-1,1),re(n-1,0));
}
                                                                                                   
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    loop(i,0,n)
    cin>>h1[i];
    loop(i,0,n)
    cin>>h2[i];
    memset(dp,-1,sizeof(dp));
    cout<<re(n,0);
    return 0;
}