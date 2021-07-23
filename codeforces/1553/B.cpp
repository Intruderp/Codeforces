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
    string s,t;
    cin>>s>>t;
    int n1=s.length(),n2=t.length(),l,k;
    for(int i=0;i<n1;i++)
    {
        string ans;
        for(int j=i;j<n1;j++)
        {
            ans.pb(s[j]);
            l=n2-ans.length();
            k=j-1;
            string x,y;
            while(l>0 and k>=0)
            {
                x.pb(s[k]);
                k--;
                l--;
            }
            y=ans+x;
            if(y==t)
            {
                pry
            }
            
        }
    }
    prn
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