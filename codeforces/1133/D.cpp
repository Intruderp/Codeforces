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
    int n,ans=0,x=0;
    cin>>n;
    int a[n],b[n];
    loop(i,0,n)
    cin>>a[i];
    loop(i,0,n)
    cin>>b[i];
    long double d;
    map<long double,int> m;
    loop(i,0,n)
    {
        if(a[i]==0)
        {
            if(b[i]==0)
            x++;
            continue;
        }
        d=(long double)b[i]/a[i];
        m[d]++;
        ans=max(ans,m[d]);
    }
    // for(auto &it:m)
    // {
    //     m[it.first]+=x;
    //     ans=max(ans,m[it.first]);
    // }
    cout<<ans+x;
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