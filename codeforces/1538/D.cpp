#include<bits/stdc++.h>
#define vi vector<int>
#define mp map<int,int>
#define ump unordered_map <int,int>
#define ll long long int
#define pb push_back
#define mod 1000000007
//#define int long long
#define  loop(i,x,n) for(int i=x;i<n;i++)
#define rloop(i,n) for(int i=n-1;i>=0;i--)
#define test int t; cin>>t; while(t--)
using namespace std;
/*************************************************************************************************/
int PF(int n)
{
    int c=0;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                c++;
                n/=i;
            }
        }
    }
    if(n>1)
    c++;
    return c;
}
void solve()
{
    int a,b,k;
    cin>>a>>b>>k;
    if(a==b and a==1)
    {
        cout<<"NO\n";
        return ;
    }
    int n,m;
    n=a,m=b;
    a=max(n,m);
    b=min(n,m);
    if(k==1 and ((a%b!=0 and b!=1) || a==b))
    {
        cout<<"NO\n";
        return ;
    }
    n=PF(a);
    m=PF(b);
    if(n+m>=k)
    {
        cout<<"YES\n";
    }
    else
    cout<<"NO\n";
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