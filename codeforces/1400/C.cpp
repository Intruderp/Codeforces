#include<bits/stdc++.h>
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
#define pr1 cout<<-1<<endl; return ;
#define all(v) v.begin(),v.end()
#define  loop(i,x,n) for(int i=x;i<n;i++)
#define rloop(i,n) for(int i=n-1;i>=0;i--)
#define test int t; cin>>t; while(t--)
using namespace std;
/*************************************************************************************************/
void solve()
{
    string s;
    int n,x;
    cin>>s>>x;
    n=s.length();
    vi v(n,-1);
    loop(i,0,n)
    {
        if(s[i]=='0')
        {
            if(i+x<n)
            v[i+x]=0;
            if(i-x>=0)
            v[i-x]=0;
        }
    }
    loop(i,0,n)
    {
        if(v[i]==-1)
        v[i]=1;
    }
    string y;
    y=s;
    loop(i,0,n)
    {
        if(i-x>=0 and v[i-x]==1)
        y[i]='1';
        else if(i+x<n and v[i+x]==1)
        y[i]='1';
        else 
        y[i]='0';
    }
    if(s==y)
    {
        for(int i:v)
        cout<<i;
    }
    else 
    cout<<-1;
    cout<<'\n';

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