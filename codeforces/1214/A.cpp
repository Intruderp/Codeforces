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
void solve()
{
} 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,x,y,c1,c2;
    cin>>n>>x>>y;
    int ans=1e18;
    y=5*y;
    for(int i=0;i<=n;i++)
    {
        c1=i*x;
        // if(c1>n)
        // break;
        c2=n-c1;
        c2=(c2/y)*y;
        if(c1<=n)
        ans=min(ans,n-(c1+c2));
    }
    cout<<ans;
    return 0;
}