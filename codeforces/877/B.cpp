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
int n;
string s;
int dp[5005][5];
int help(int i,char c,int x)
{
    if(i==n)
    return 0;
    if(dp[i][x]!=-1)
    return dp[i][x];
    if(s[i]==c)
    return dp[i][x]=help(i+1,c,x);
    else if(s[i]!=c and s[i]=='b' and x<3)
    return dp[i][x]=min(help(i+1,++c,x+1),help(i+1,c,x)+1);
    else if(s[i]!=c and s[i]=='a' and x<3)
    return dp[i][x]=min(help(i+1,--c,x+1),1+help(i+1,c,x));
    else 
    return dp[i][x]=1+help(i+1,c,x);

}
void solve()
{
    cin>>s;
    n=s.length();
    memset(dp,-1,sizeof(dp));
    cout<<n-help(0,'a',1);
} 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //test
    solve();
    return 0;
}