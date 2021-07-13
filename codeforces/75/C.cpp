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
    int a,b,q;
    cin>>a>>b;
    vi v1,v2,cf;
    for(int i=1;i*i<=a;i++)
    {
        if(a%i==0)
        {
            v1.pb(i);
            if(i!=a/i)
            v1.pb(a/i);
        }
    }
    for(int i=1;i*i<=b;i++)
    {
        if(b%i==0)
        {
            v2.pb(i);
            if(i!=b/i)
            v2.pb(b/i);
        }
    }
    sort(all(v2));
    for(int i:v1)
    {
        if(binary_search(all(v2),i))
        cf.pb(i);
    }
    sort(all(cf));
    cin>>q;
    while (q--)
    {
        cin>>a>>b;
        auto it=lower_bound(all(cf),b);
        if(it==cf.end() || *it>b)
        it--;
        if(*it>=a)
        cout<<*it<<'\n';
        else 
        cout<<"-1\n";
    }
    
} 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}