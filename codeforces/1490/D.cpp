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
vi v;
int n;
int check(int l,int h)
{
    int mx=INT_MIN,ans;
    for(int i=l;i<=h;i++)
    {
        if(mx<v[i])
        {
            ans=i;
            mx=v[i];
        }
    }
    return ans;
}
void help(int l,int r,int d,int ans[])
{
    int mx=check(l,r);
    ans[mx]=d;
    if(mx>l)
    help(l,mx-1,d+1,ans);
    if(mx<r)
    help(mx+1,r,d+1,ans);
}
void solve()
{
    cin>>n;
    v.clear();
    int x;
    loop(i,0,n)
    {
        cin>>x;
        v.pb(x);
    }
    int ans[n];
    memset(ans,-1,sizeof(ans));
    help(0,n-1,0,ans);
    for(int i:ans)
    cout<<i<<' ';
    cout<<"\n";
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