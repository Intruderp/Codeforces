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
vector<int> ans;
int maxelement(vector<int> &v)
{
    int mx=0;
    for(int i=0;i<(int)v.size();i++)
    mx=max(mx,v[i]);
    return mx;
}
int minelement(vector<int> &v)
{
    int mn=INT_MAX;
    for(int i=0;i<(int)v.size();i++)
    mn=min(mn,v[i]);
    return mn;
}
int s(vector<int> &v)
{
    int sum=0;
    for(int i:v)
    sum+=i;
    return sum;
}
int c=0;
void help(vector<int> v)
{
    int mx,mn,mid,sum;
    c++;
    mx=maxelement(v);
    mn=minelement(v);
    sum=s(v);
    ans.pb(sum);
    if(mx==mn)
    return ;
    mid=(mn+mx)/2;
    vi v1,v2;
    for(int i:v)
    {
        if(i<=mid)
        v1.push_back(i);
        else
        v2.push_back(i);
    }
    help(v1);
    help(v2);
}
void solve()
{
    ans.clear();
    int n,q,s;
    cin>>n>>q;
    vi v(n);
    loop(i,0,n)
    cin>>v[i];
    help(v);
    sort(ans.begin(),ans.end());
    while(q--)
    {
        cin>>s;
        if(binary_search(ans.begin(),ans.end(),s))
        cout<<"Yes\n";
        else 
        cout<<"No\n";
    }
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