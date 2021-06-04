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
    int n;
    cin>>n;
    int a[n];
    loop(i,0,n)
    cin>>a[i];
    vi v;
    loop(i,0,n)
    {
        if(a[i]%2==0)
        v.pb(a[i]);
    }
    loop(i,0,n)
    {
        if(a[i]%2)
        v.pb(a[i]);
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(__gcd(v[i],2*v[j])>1)
            ans++;
        }
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