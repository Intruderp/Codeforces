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
vector<pair<int,int>> v;
bool check(int x,int y)
{
    int a,b;
    for(int i=0;i<v.size();i++)
    {
        a=v[i].first;
        b=v[i].second;
        if(a!=x && a!=y && b!=x && b!=y)
        return false;
    }
    return true;
}
void solve()
{
    int n,m,x,y,a,b;
    cin>>n>>m;
    loop(i,0,m)
    {
        cin>>x>>y;
        v.pb({x,y});
    }
    x=v[0].first;
    y=v[0].second;
    bool c1=true,c2=true;
    for(int i=0;i<v.size();i++)
    {
        a=v[i].first;
        b=v[i].second;
        if(a!=x && a!=y && b!=x && b!=y)
        {
            c1=false;
            break;
        }
    }
    if(c1)
    {
        cout<<"YES";
        return ;
    }
    if(check(a,b) || check(a,x) || check(a,y) || check(b,x) || check(b,y) || check(x,y))
    {
        cout<<"YES";
        return ;
    }
    cout<<"NO";
} 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //test
    solve();
    return 0;
}