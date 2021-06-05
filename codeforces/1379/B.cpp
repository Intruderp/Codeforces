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
    int l,r,m,a,b,c,x,y,r1,r2;
    cin>>l>>r>>m;
    for(int i=l;i<=r;i++)
    {
        a=i;
        if(m%a==0)
        {
            cout<<a<<' '<<r<<' '<<r<<'\n';
            return ;
        }
        x=(m/a)*a;
        r1=m-x;
        b=r;
        c=r-r1;
        if(c>=l && c<=r && r1!=m)
        {
            cout<<a<<' '<<b<<' '<<c<<'\n';
            return ;
        }
        y=(m/a+1)*a;
        r2=y-m;
        c=r;
        b=r-r2;
        if(b>=l && b<=r)
        {
            cout<<a<<' '<<b<<' '<<c<<'\n';
            return ;
        }
    }
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