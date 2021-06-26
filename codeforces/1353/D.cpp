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
    int n;
    cin>>n;
    int a[n+1],l,r,mid,op=1;
    map<int,set<pii>> m;
    l=1,r=n;
    mid=(l+r)/2;
    m[r-l].insert({l,r});
    while(m.size())
    {
        auto it=m.end();
        it--;
        int x=it->first;
        auto it2=m[x].begin();
        l=it2->first;
        r=it2->second;
        mid=(l+r)/2;
        a[mid]=op;
        op++;
        if(mid-1>=l)
        {
            m[mid-1-l].insert({l,mid-1});
        }
        if(mid+1<=r)
        {
            m[r-(mid+1)].insert({mid+1,r});
        }
        m[x].erase(it2);
        if(m[x].size()==0)
        m.erase(x);
    }
    for(int i=1;i<=n;i++)
    cout<<a[i]<<' ';
    cout<<'\n';
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