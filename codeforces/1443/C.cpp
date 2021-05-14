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
    int n,s=0,ans,a1,a2;
    cin>>n;
    int a[n],b[n];
    loop(i,0,n)
    cin>>a[i];
    loop(i,0,n)
    cin>>b[i];
    vector<pair<int,int> >p(n);
    pair<int,int> pr;
    loop(i,0,n)
    {
        p[i].first=a[i];
        p[i].second=b[i];
        s+=b[i];
    }
    sort(p.begin(),p.end());
    ans=1e16;
    for(int i=n-2;i>=0;i--)
    p[i].second+=p[i+1].second;
    for(int i=n-1;i>=0;i--)
    {
        a1=1e16,a2=1e16;
        pr=make_pair(p[i].first,a1);
        auto it=upper_bound(p.begin(),p.end(),pr);
        // if(it!=p.end())
        // cout<<"itr "<<it->first<<' '<<it->second<<endl;
        if(it!=p.end())
        a1=max(p[i].first,it->second);
        else 
        a1=p[i].first;
        a2=s;
        //cout<<a1<<' '<<a2<<endl;
        ans=min({ans,a1,a2});
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