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
    int n,x;
    cin>>n;
    int p1,p2;
    loop(i,0,n)
    {
        cin>>x;
        if(x==1)
        p1=i+1;
        if(x==n)
        p2=i+1;
    }
    int ans;
    ans=min({max(p1,p2),max(n-p1+1,n-p2+1)});
    if(p1>p2)
    ans=min(ans,p2+n-p1+1);
    else
    ans=min(ans,p1+n+1-p2);
    cout<<ans<<"\n";

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