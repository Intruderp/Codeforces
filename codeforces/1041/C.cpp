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
    int n,m,d,x;
    cin>>n>>m>>d;
    d++;
    set<pii> s;
    loop(i,0,n)
    {
        cin>>x;
        s.insert({x,i});
    }
    int ans[n];
    x=0;
    while(s.size()>0)
    {
        x++;
        auto it=s.begin();
        ans[it->second]=x;
        auto it2=s.lower_bound({it->first+d,0});
        s.erase(it);
        while(it2!=s.end())
        {
            ans[it2->second]=x;
            int y=it2->first;
            s.erase(it2);
            it2=s.lower_bound({y+d,0});
        }
    }
    cout<<x<<'\n';
    for(int i:ans)
    cout<<i<<' ';
} 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}