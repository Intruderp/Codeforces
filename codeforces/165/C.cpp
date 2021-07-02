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
    int k,ans=0,n,x,y;
    string s;
    cin>>k>>s;
    n=s.length();
    vi v;
    loop(i,0,n)
    {
        if(s[i]=='1')
        v.pb(i);
    }
    int nn=v.size(),c=0;
    loop(i,0,n)
    {
        if(k==0)
        {
            if(v.size()==0)
            ans+=n-i;
            else
            {
                auto it=lower_bound(all(v),i);
                if(it==v.end())
                ans+=n-i;
                else
                ans+=*it-i;
            }
            //cout<<ans<<endl;
            continue;
        }
        x=c+k;
        x--;
        if(x<nn)
        {
            if(x==nn-1)
            {
                ans+=n-v[x];
            }
            else
            ans+=v[x+1]-v[x];
        }
        if(s[i]=='1')
        c++;
        //cout<<ans<<endl;
    }
    pr(ans)
} 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}