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
    int n,m,x,y;
    cin>>n>>m;
    mp mapp;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        mapp[x]=i;
    }
    int c=0,ans=0;
    x=0;
    loop(i,0,m)
    {
        cin>>y;
        if(mapp[y]>x)
        {
            ans+=(mapp[y]-1-c)*2+1;
            x=mapp[y];
            c++;
        }
        else
        ans++,c++;
    }
    cout<<ans<<'\n';

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