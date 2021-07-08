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
#define double long double
#define test int t; cin>>t; while(t--)
using namespace std;
/*************************************************************************************************/
double v;
double eps=1e10;
double help(double c,double m, double p,int x,int y,int z,int l,double ans)
{
    if(l=='P')
    return ans*(x+y+z);
    if(p==-1)
    return 0.0;
   // if(dp[x][y][z]!=-1)
    //return dp[x][y][z];
    double a=0.0;
    if(c>0)
    {
        if(c<=v)
        {
            if(m!=-1 and p!=-1)
            a+=help(-1,m+c/2,p+c/2,x+1,y,z,'C',ans*c/eps);
            else if(m==-1 and p==-1)
            a+=help(-1,-1,-1,x+1,y,z,'C',ans*c/eps);
            else if(m==-1 and p!=-1)
            a+=help(-1,-1,p+c,x+1,y,z,'C',ans*c/eps);
            else 
            a+=help(-1,m+c,-1,x+1,y,z,'C',ans*c/eps);
        }
        else
        {
            if(m!=-1 and p!=-1)
            a+=help(c-v,m+(v)/2,p+(v)/2,x+1,y,z,'C',ans*c/eps);
            else if(m==-1 and p==-1)
            a+=help(c-v,-1,-1,x+1,y,z,'C',ans*c/eps);
            else if(m==-1 and p!=-1)
            a+=help(c-v,-1,p+(v),x+1,y,z,'C',ans*c/eps);
            else 
            a+=help(c-v,m+(v),-1,x+1,y,z,'C',ans*c/eps);
        }
    }
    if(m>0)
    {
        if(m<=v)
        {
            if(c!=-1 and p!=-1)
            a+=help(c+m/2,-1,p+m/2,x,y+1,z,'M',ans*m/eps);
            else if(c==-1 and p==-1)
            a+=help(-1,-1,-1,x,y+1,z,'M',ans*m/eps);
            else if(c==-1 and p!=-1)
            a+=help(-1,-1,p+m,x,y+1,z,'M',ans*m/eps);
            else 
            a+=help(c+m,-1,-1,x,y+1,z,'M',ans*m/eps);
        }
        else
        {
            if(c!=-1 and p!=-1)
            a+=help(c+(v)/2,m-v,p+(v)/2,x,y+1,z,'M',ans*m/eps);
            else if(c==-1 and p==-1)
            a+=help(-1,m-v,-1,x,y+1,z,'M',ans*m/eps);
            else if(c==-1 and p!=-1)
            a+=help(-1,m-v,p+v,x,y+1,z,'M',ans*m/eps);
            else 
            a+=help(c+v,m-v,-1,x,y+1,z,'M',ans*m/eps);
        }
    }
    if(p>0)
    {
        if(p<=v)
        {
            if(c!=-1 and m!=-1)
            a+=help(c+p/2,m+p/2,-1,x,y,z+1,'P',ans*p/eps);
            else if(c==-1 and m==-1)
            a+=help(-1,-1,-1,x,y,z+1,'P',ans*p/eps);
            else if(c==-1 and m!=-1)
            a+=help(-1,m+p,-1,x,y,z+1,'P',ans*p/eps);
            else 
            a+=help(c+p,-1,-1,x,y,z+1,'P',ans*p/eps);
        }
        else
        {
            if(c!=-1 and m!=-1)
            a+=help(c+(v)/2,m+(v)/2,p-v,x,y,z+1,'P',ans*p/eps);
            else if(c==-1 and m==-1)
            a+=help(-1,-1,p-v,x,y,z+1,'P',ans*p/eps);
            else if(c==-1 and m!=-1)
            a+=help(-1,m+v,p-v,x,y,z+1,'P',ans*p/eps);
            else 
            a+=help(c+v,-1,p-v,x,y,z+1,'P',ans*p/eps);
        }
    }
    return a;
}
void solve()
{
    double a,b,c;
    cin>>a>>b>>c>>v;
    a*=eps;
    b*=eps;
    c*=eps;
    v*=eps;
    cout<<fixed<<setprecision(12)<<help(a,b,c,0,0,0,'X',1)<<endl;

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