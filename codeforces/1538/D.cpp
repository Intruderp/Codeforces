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
const int n=31625;
bool primes[n+1];
vi v;
void seive()
{
    memset(primes,true,sizeof(primes));
    primes[0]=primes[1]=false;
    for(int i=2;i*i<=n;i++)
    {
        if(primes[i])
        {
            for(int j=i*i;j<=n;j+=i)
            primes[j]=false;
        }
    }
    for(int p=2;p<=n;p++)
    {
        if(primes[p])
        v.pb(p);
    }
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
    n=0,m=0;
    for(int p:v)
    {
        while(a%p==0)
        {
            n++;
            a/=p;
        }
    }
    for(int p:v)
    {
        while(b%p==0)
        {
            m++;
            b/=p;
        }
    }
    if(b>1)
    m++;
    if(a>1)
    n++;
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
    seive();
    test
    solve();
    return 0;
}