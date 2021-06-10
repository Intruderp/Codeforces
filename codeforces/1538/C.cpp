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
    int n,l,r,x,y1,y2;
    cin>>n>>l>>r;
    //int ans=0;
    int a[n];
    vi v;
    //vector<pair<int,int>> v;
    loop(i,0,n)
    {
        cin>>a[i];
        v.pb(a[i]);
        
    }
    pair<int,int> p;
    int ans=0;
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        x=v[i];
        y1=l-x;
        y2=r-x;
        auto it1=lower_bound(v.begin(),v.end(),y1);
        auto it2=upper_bound(v.begin(),v.end(),y2);
        if(it1==v.end())
        continue;
        it2--;
        y1=x+x;
        ans+=it2-it1+1;
        if(y1>=l and y1<=r)
        ans--;
    }
    cout<<ans/2<<'\n';
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