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
    int n,a,b,ans=0;
    cin>>n>>a>>b;
    string s;
    cin>>s;
    if(b>=0)
    {
        ans+=(a+b)*n;
    }
    else 
    {
        vi v;
        loop(i,0,n)
        {
            char c=s[i];
            int x=0;
            while(i<n and s[i]==c)
            {
                i++;
                x++;
            }
            if(c=='0')
            x*=-1;
            v.pb(x);
            //cout<<x<<endl;
            i--;
        }
        int c1=0,c=0;
        for(int i:v)
        {
            if(i>0)
            c1++;
            else 
            c++;
        }
        for(int i:v)
        {
            if(c1>c)
            {
                if(i<0)
                {
                    i*=-1;
                    ans+=(i*a+b);
                }
            }
            else
            {
                if(i>0)
                ans+=(i*a+b);
            }
        }
        int x=0;
        for(int i:v)
        {
            if(c1>c)
            {
                if(i>0)
                x+=i;
            }
            else 
            {
                if(i<0)
                x+=(-i);
            }
        }
        ans+=x*a+b;
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