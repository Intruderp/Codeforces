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
    map<char,vi> m;
    int ans=0,n;
    n=t.length();
    for(int i=0;i<s.length();i++)
        m[s[i]].pb(i);
    int i=0,k=-1;
    while(i<n)
    {
        if(m.count(t[i])==0)
        {
            pr(-1);
        }
        k=m[t[i]][0];
        i++;
        ans++;
        while (i<n)
        {
            if(1)
            {
                if(m.count(t[i])==0)
                {
                    pr(-1);
                }
                auto it=upper_bound(m[t[i]].begin(),m[t[i]].end(),k);
                if(it==m[t[i]].end())
                break;
                i++;
                k=*it;
            }
            else
            break;
        }
    }
    pr(ans);

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