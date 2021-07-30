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
void solve()
{
    int n,ans=1e18;
    cin>>n;
    int a[2][n];
    loop(i,0,2)
    {
        loop(j,0,n)
        cin>>a[i][j];
    }
    int pre[n],pre2[n],x=0,y=0;
    loop(i,0,n)
    {
        x+=a[0][i];
        pre[i]=x;
    }
    x=0;
    loop(i,0,n)
    {
        x+=a[1][i];
        pre2[i]=x;
    }
    loop(i,0,n)
    {
        x=0,y=0;
        if(i>0)
        x=pre2[i-1];
        y=pre[n-1];
        y-=pre[i];
        ans=min({ans,max(x,y)});
        //cout<<x<<' '<<y<<endl;
    }
    pr(ans)

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