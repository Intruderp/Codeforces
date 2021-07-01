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
const int n=5000000;
int SPF[n+1];
int prefix[n+1];
void seive()
{
    for(int i=0;i<=n;i++)
    SPF[i]=i;
    for(int i=2;i*i<=n;i++)
    {
        if(SPF[i]==i)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                if(SPF[j]==j)
                SPF[j]=i;
            }
        }
    }
    for(int i=2;i<=n;i++)
    {
        int k=i,count=0;
        while(k>1)
        {
            count++;
            k/=SPF[k];
        }
        prefix[i]=count;
    }
    for(int i=1;i<=n;i++)
    prefix[i]+=prefix[i-1];
}
void solve()
{
    int a,b,ans=0;
    cin>>a>>b;
    ans=prefix[a]-prefix[b];
    pr(ans)
} 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    seive();
    test
    solve();
    return 0;
}