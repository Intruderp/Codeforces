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
    int n,m,k,x,y,a,b;
    cin>>n>>m>>k;
    string ans;
    vpii v1(k),v2(k);
    loop(i,0,k)
    cin>>v1[i].first>>v1[i].second;
    loop(i,0,k)
    cin>>v2[i].first>>v2[i].second;
    x=n-1,y=m-1;
    while(x--)
    ans.pb('U');
    while(y--)
    ans.pb('L');
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<m;j++)
        {
            if(i%2==0)
            ans.pb('R');
            else 
            ans.pb('L');
        }
        ans.pb('D');
    }
    cout<<ans.length()<<'\n'<<ans;
    

} 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}