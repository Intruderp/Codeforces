#include<bits/stdc++.h>
#define vi vector<int>
#define mp map<int,int>
#define ump unordered_map <int,int>
#define ll long long int
#define pb push_back
#define mod 1000000007
#define int long long
#define  loop(i,x,n) for(int i=x;i<n;i++)
#define rloop(i,n) for(int i=n-1;i>=0;i--)
#define test int t; cin>>t; while(t--)
using namespace std;
/*************************************************************************************************/
void solve()
{
    string s;
    map<pair<int,int>,int> m;
    int x=0,y=0,ans=0,a,b;
    cin>>s;
    m[{0,0}]=1;
    loop(i,0,s.length())
    {
        a=x,b=y;
        if(s[i]=='N')
        y++;
        else if(s[i]=='S')
        y--;
        else if(s[i]=='E')
        x++;
        else if(s[i]=='W')
        x--;
        if(m.count({x+a,y+b}))
        ans++;
        else 
        ans+=5;
        m[{x+a,y+b}]=1;
    }
    cout<<ans<<'\n';
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