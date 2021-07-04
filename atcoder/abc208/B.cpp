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
using namespace std;
/*************************************************************************************************/
vi a(10);
// const int sz=1e7+1;
// int dp[10][sz+1];
int fact(int n)
{
    int ans=1;
    for(int i=2;i<=n;i++)
    ans*=i;
    return ans;
}
// int help(int i,int s)
// {
//     if(s==0)
//     return 0;
//     if(i==10)
//     return 1e12;
//     if(dp[i][s]!=-1)
//     return dp[i][s];
//     if(s>=a[i])
//     return dp[i][s]=min(help(i,s-a[i])+1,help(i+1,s));
//     else
//     return dp[i][s]=help(i+1,s);
// }
void solve()
{
    for(int i=0;i<10;i++)
    a[i]=fact(i+1);
    int s;
    cin>>s;
    // reverse(a,a+10);
    // memset(dp,-1,sizeof(dp));
    // int ans=0;
    // //cout<<a[0]<<endl;
    // while(s>a[0])
    // {
    //     s-=a[0];
    //     ans++;
    // }
    // while(s>a[1])
    // {
    //     s-=a[1];
    //     ans++;
    // }
    // cout<<help(0,s)+ans;
    int ans=0;
    while(s>0)
    {
        auto it=lower_bound(all(a),s);
        int x,y;
        if(it==a.end())
        x=a[9];
        else 
        {
            if(*it==s)
            x=s;
            else
            {
                it--;
                x=*it;
            }
        }
        y=s/x;
        s-=(y*x);
       // cout<<x<<' '<<y<<' '<<s<<endl;
        ans+=y;
       // break;
    }
    pr(ans)
    
} 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}