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
    string s1,s2;
    int n,c1=0,c2=0;
    cin>>n>>s1>>s2;
    vi v1,v2;
    loop(i,0,n)
    {
        if(s1[i]=='a')
        c1++;
        if(s2[i]=='a')
        c1++;
        if(s2[i]=='b')
        c2++;
        if(s1[i]=='b')
        c2++;
        if(s1[i]!=s2[i])
        {
            if(s1[i]=='a')
            v1.pb(i);
            else
            v2.pb(i);
        }
    }
    if(c1%2==1 or c2%2==1)
    {
        pr(-1)
    }
    vpii ans;
        int i=0;
        while(i<((int)v1.size()-1))
        {
            ans.pb({v1[i],v1[i+1]});
            i+=2;
        }
        int j=0;
        while(j<((int)v2.size()-1))
        {
            ans.pb({v2[j],v2[j+1]});
            j+=2;
        }
        if(v1.size()%2)
        {
            ans.pb({v1[i],v1[i]});
            ans.pb({v1[i],v2[j]});
        }
    cout<<ans.size()<<'\n';
    for(auto it:ans)
    cout<<it.F+1<<' '<<it.S+1<<'\n';
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