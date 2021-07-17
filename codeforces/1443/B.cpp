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
    int a,b,ans=0,n;
    string s;
    cin>>a>>b>>s;
    n=s.length();
    vpii v;
    for(int i=0;i<n;i++)
    {
       if(s[i]=='1')
       {
           int j=i;
           while(i<n and s[i]=='1')
           i++;
           i--;
           v.pb({j,i});
       }
    }
    n=v.size();
    for(int i=0;i<n-1;i++)
    {
        int x,y,d;
        x=v[i].second;
        y=v[i+1].first;
        d=y-x-1;
        if(b*d<=a)
        {
            ans+=b*d;
            v[i].first=-1;
        }
    }
    for(int i=0;i<v.size();i++)
    {
        if(v[i].first!=-1)
        ans+=a;
    }
    pr(ans)
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