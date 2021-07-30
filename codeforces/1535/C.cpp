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
    int n,ans=0,x,y,z,a,b;
    string s;
    cin>>s;
    map<int,vi> m;
    n=s.length();
    loop(i,0,n)
    {
        if(s[i]=='0')
        {
            if(i%2)
            m[1].pb(i);
            else 
            m[2].pb(i);
        }
        else if(s[i]=='1')
        {
            if(i%2)
            m[3].pb(i);
            else 
            m[4].pb(i);
        }
    }
    loop(i,1,5)
    m[i].pb(n);
    loop(i,0,n)
    {
        a=0;
        x=0,y=0,z=0;
        if(s[i]=='0')
        {
            if(i%2)
            {
                auto it=upper_bound(all(m[2]),i);
                x=*it;
                auto it2=upper_bound(all(m[3]),i);
                y=*it2;
            }
            else
            {
                auto it=upper_bound(all(m[1]),i);
                x=*it;
                auto it2=upper_bound(all(m[4]),i);
                y=*it2;
            }
            //cout<<"here "<<x<<' '<<y<<endl;
            z=min(x,y);
            a=z-i;
        }
        else if(s[i]=='1')
        {
            if(i%2)
            {
                auto it=upper_bound(all(m[4]),i);
                x=*it;
                auto it2=upper_bound(all(m[1]),i);
                y=*it2;
            }
            else
            {
                auto it=upper_bound(all(m[3]),i);
                x=*it;
                auto it2=upper_bound(all(m[2]),i);
                y=*it2;
            }
            z=min(x,y);
            a=z-i;
        }
        else
        {
            int a1=0,a2=0;
            if(i%2)
            {
                auto it=upper_bound(all(m[2]),i);
                x=*it;
                auto it2=upper_bound(all(m[3]),i);
                y=*it2;
            }
            else
            {
                auto it=upper_bound(all(m[1]),i);
                x=*it;
                auto it2=upper_bound(all(m[4]),i);
                y=*it2;
            }
            z=min(x,y);
            a1=z-i;
            if(i%2)
            {
                auto it=upper_bound(all(m[4]),i);
                x=*it;
                auto it2=upper_bound(all(m[1]),i);
                y=*it2;
            }
            else
            {
                auto it=upper_bound(all(m[3]),i);
                x=*it;
                auto it2=upper_bound(all(m[2]),i);
                y=*it2;
            }
            z=min(x,y);
            a2=z-i;
            a=max(a1,a2);
        }
        ans+=a;
        //cout<<a<<endl;
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