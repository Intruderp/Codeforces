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
    int n,x=1,ans=0,y;
    cin>>n;
    int a[n];
    vi v;
    mp m;
    loop(i,0,n)
    {
        cin>>a[i];
        m[a[i]]++;
    }
    while(x<=(1e10))
    {
        v.pb(x);
        x*=2;
    }
    for(int i=0;i<n;i++)
    {
        x=a[i];
        m[a[i]]--;
        if(m[a[i]]==0)
        m.erase(a[i]);
        for(int j=0;j<v.size();j++)
        {
            y=v[j]-x;
            if(m.count(y))
            ans+=m[y];
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