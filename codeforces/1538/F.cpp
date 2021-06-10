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
    int a,b,x=10;
    cin>>a>>b;
    int ans=b-a;
    int c1=0,c2=0;
    while((a/x)>0)
    {
        c2+=a/x;
        x=x*10;
    }
    x=10;
    while(b/x>0)
    {
        c1+=b/x;
        x=x*10;
    }
    ans+=c1-c2;
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