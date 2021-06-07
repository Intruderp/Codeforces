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
bool dp[101][100000+5];
void solve()
{
    cin>>n;
    int a[n],s=0;
    loop(i,0,n)
    {
        cin>>a[i];
        s+=a[i];
    }
    for(int i=0;i<=s;i++)
    dp[0][s]=false;
    for(int i=0;i<=n;i++)
    dp[i][0]=true;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=s;j++)
        {
            if(a[i-1]<=j)
            dp[i][j]=(dp[i-1][j-a[i-1]] || dp[i-1][j]);
            else
            dp[i][j]=dp[i-1][j];
        }
    }
    int ans=INT_MAX,a1,b1;
    for(int j=0;j<=s;j++)
    {
        if(dp[n][j])
        {
            a1=j;
            b1=s-a1;
            ans=min(ans,max(a1,b1));
        }
    }
    cout<<ans;
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