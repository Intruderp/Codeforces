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
map<char,int> m;
int l=0,h=1e15,a,b,c,x,y,z,r;
bool possible(int n)
{
    int r1,r2,r3;
    int money=r;
    r1=n*m['B'];
    r2=n*m['S'];
    r3=n*m['C'];
    if(r1>a)
    {
        int b1=r1-a;
        money-=b1*x;
    }
    if(r2>b)
    {
        int b2=r2-b;
        money-=b2*y;
    }
    if(r3>c)
    {
        int b3=r3-c;
        money-=b3*z;
    }
    return money>=0 ? true : false;
}
void solve()
{
    string s;
    cin>>s>>a>>b>>c>>x>>y>>z>>r;
    for(char c:s)
    m[c]++;
    int mid,ans=0;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(possible(mid))
        {
            ans=mid;
            l=mid+1;
        }
        else 
        h=mid-1;
    }
    pr(ans)
} 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}