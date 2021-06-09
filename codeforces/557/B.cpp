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
//#define double long double
using namespace std;
/*************************************************************************************************/
void solve()
{
    long double n,w,x,y;
    cin>>n>>w;
    long double amax=(long double)w/(3*n),a;
    vi v;
    loop(i,0,2*n)
    {
        cin>>x;
        v.pb(x);
    }
    sort(v.rbegin(),v.rend());
    y=v[n-1];
    x=v[2*n-1];
    a=min(y/2,x);
    if(a<=amax)
    cout<<fixed<<setprecision(10)<<3*a*n;
    else
    cout<<w;

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