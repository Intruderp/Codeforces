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
bool check(vi v)
{

    for(int i=0;i<v.size();i++)
    {
        for(int j=i+1;j<v.size();j++)
        {
            for(int k=j+1;k<v.size();k++)
            {
                int d1,d2,d3;
                d3=k-i+abs(v[k]-v[i]);
                d1=j-i+abs(v[j]-v[i]);
                d2=k-j+abs(v[k]-v[j]);
                if(d1+d2==d3)
                return true;
            }
        }
    }
    return false;
}
void solve()
{
    int n,ans=0;
    cin>>n;
    int a[n];
    loop(i,0,n)
    cin>>a[i];
    loop(i,0,n)
    {
        vi v;
        loop(j,i,n)
        {
            v.pb(a[j]);
            if(check(v))
            break;
            ans++;
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