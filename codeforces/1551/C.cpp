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
vector<string> v;
int freq[200000][5];
int n;
bool comp(pii p1,pii p2)
{
    int x,y;
    x=p1.first-p1.second;
    y=p2.first-p2.second;
    return x>y;
}
int help(char c)
{
    vpii f;
    //cout<<c<<endl;
    for(int i=0;i<n;i++)
    {
        int x=0,y=0;
        for(int j=0;j<5;j++)
        {
            if(j==(c-'a'))
            y+=freq[i][j];
            else
            x+=freq[i][j];
        }
        //cout<<x<<' '<<y<<endl;
        f.pb({x,y});
    }
    sort(all(f),comp);
    int ans=0,x=0,y=0;
    for(int i=n-1;i>=0;i--)
    {
        x+=f[i].second;
        y+=f[i].first;
        if(y>=x)
        break;
        ans++;
    }
    return ans;
}
void solve()
{
    cin>>n;
    string s;
    v.clear();
    loop(i,0,n)
    {
        cin>>s;
        v.pb(s);
        for(int j=0;j<5;j++)
        freq[i][j]=0;
        for(int j=0;j<s.length();j++)
        freq[i][s[j]-'a']++;
    }
    int ans=0;
    for(char c='a';c<='e';c++)
    {
        ans=max(ans,help(c));
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