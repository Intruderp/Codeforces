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
    int x,y,a,b,c,d;
    cin>>a>>b>>c>>d;
    vi v;
    v.pb(a);
    v.pb(b);
    v.pb(c);
    v.pb(d);
    sort(v.begin(),v.end());
    int m1=v[2],m2=v[3];
    x=max(a,b);
    y=max(c,d);
    if((x==m1 && y==m2) || (x==m2 && y==m1))
    cout<<"YES\n";
    else 
    cout<<"NO\n";
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