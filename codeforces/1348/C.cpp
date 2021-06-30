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
    int n,k;
    string s;
    cin>>n>>k>>s;
    sort(s.begin(),s.end());
    string ans;
    int i=0;
    if(k==1)
    {
        pr(s)
    }
    if(s[i]!=s[i+k-1])
    {
        pr(s[i+k-1])
    }
    ans.pb(s[0]);
    i=k;
    while(i<n)
    {
        if(s[i]<s[n-1])
        {
            for(int j=i;j<n;j++)
            ans.pb(s[j]);
            pr(ans)
        }
        ans.pb(s[i]);
        i+=k;
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