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
    string s;
    cin>>s;
    int n=s.length(),s1=0,s2=0,a1=0,a2=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='?')
        {
            if(i%2==0)
            s1++;
        }
        else
        {
            if(i%2)
            s2+=(s[i]-'0');
            else
            s1+=(s[i]-'0');
        }
        int r=n-1-i,x,y;
        a1++;
        // cout<<r<<' '<<s1<<' '<<s2<<endl;
        if(i%2)
        x=r/2,y=r/2;
        else
        x=r/2,y=r/2+1;
        if(s1>s2 and s2+y<s1)
        break;
        if(s2>s1 and s1+x<s2)
        break;
    }
    s1=0,s2=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='?')
        {
            if(i%2)
            s2++;
        }
        else
        {
            if(i%2)
            s2+=(s[i]-'0');
            else
            s1+=(s[i]-'0');
        }
        int r=n-1-i,x,y;
        a2++;
        if(i%2)
        x=r/2,y=r/2;
        else
        x=r/2,y=r/2+1;
        //cout<<r<<' '<<s1<<' '<<s2<<endl;
        if(s1>s2 and s2+y<s1)
        break;
        if(s2>s1 and s1+x<s2)
        break;
    }
    pr(min(a1,a2))
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