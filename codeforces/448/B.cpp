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
int dp[105][105];
int lcs(int n,int m,string s,string t)
{
    if(n==0 || m==0)
    {
        return 0;
    }
    if(dp[n][m]!=-1)
    return dp[n][m];
    if(s[n-1]==t[m-1])
    return dp[n][m]=1+lcs(n-1,m-1,s,t);
    else
    {
        return dp[n][m]=max(lcs(n,m-1,s,t),lcs(n-1,m,s,t));
    }
    
}                                                                                                   
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    string s,t;
    cin>>s>>t;
    n=s.length(),m=t.length();
    memset(dp,-1,sizeof(dp));
    int l=lcs(n,m,s,t);
    if(l==m)
    {
        cout<<"automaton";
        return 0;
    }
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t)
    {
        cout<<"array";
        return 0;
    }
    memset(dp,-1,sizeof(dp));
    l=lcs(n,m,s,t);
    if(l==m)
    {
        cout<<"both";
        return 0;
    }
    cout<<"need tree";
    return 0;
}