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
    int n,x,y,x1,x2,y1,y2,a,b;
    cin>>n;
    map<int,vi> m;
    x1=-1e5,x2=1e5;
    y1=x1,y2=x2;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<6;j++)
        {
            cin>>x;
            m[i].pb(x);
        }
    }
    bool ans=true;
    for(auto it:m)
    {
        a=it.second[0];
        b=it.second[1];
        if(a<x1)
        {
            if(it.second[4]==0)
            ans=false;
        }
        if(a>x2)
        {
            if(it.second[2]==0)
            ans=false;
        }
        if(b<y1)
        {
            if(it.second[3]==0)
            ans=false;
        }
        if(b>y2)
        {
            if(it.second[5]==0)
            ans=false;
        }
        if(!ans)
        {
            cout<<"0\n";
            return ;
        }
        if(it.second[2]==0)
        {
            if(x1<a)
            x1=a;
        }
        if(it.second[3]==0)
        {
            if(y2>b)
            y2=b;
        }
        if(it.second[4]==0)
        {
            if(x2>a)
            x2=a;
        }
        if(it.second[5]==0)
        {
            if(b>y1)
            y1=b;
        }
        //cout<<b<<' '<<y1<<'\n';
    }
    cout<<1<<' '<<x1<<' '<<y1<<'\n';
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