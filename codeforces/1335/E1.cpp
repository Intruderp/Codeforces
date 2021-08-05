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
//#define int long long
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
    int n,ans=0;
    cin>>n;
    vector<int> v[26];
    int a[n];
    loop(i,0,n)
    {
        cin>>a[i];
        v[a[i]-1].pb(i);
        ans=max(ans,(int)v[a[i]-1].size());
    }
    for(int i=0;i<26;i++)
    {
        int x,y,z=v[i].size();
        if(z==0)
        continue;
        if(z==1)
        {
            ans=max(ans,1);
            continue;
        }
        for(int k=1;k*2<=z;k++)
        {
            x=v[i][k-1],y=v[i][z-k];
            int freq[26]={0},mx=0;
            for(int e=x+1;e<y;e++)
            {
                freq[a[e]-1]++;
                if((a[e]-1)!=i)
                mx=max(mx,freq[a[e]-1]);
            }
            ans=max(ans,mx+k*2);
        }
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