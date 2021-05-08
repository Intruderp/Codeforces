#include<bits/stdc++.h>
#define vi vector<int>
#define ma map<int,int>
#define uma unordered_map <int,int>
#define ll long long int
#define pb push_back
#define mod 1000000007
#define int long long
#define  loop(i,x,n) for(int i=x;i<n;i++)
#define rloop(i,n) for(int i=n-1;i>=0;i--)
#define test int t;cin>>t; while(t--)
#define mp make_pair
#define pr pair<int,int>
using namespace std;
/*************************************************************************************************/
bool prime[10000001];
int n = 10000000;
vi v;
void seive()
{
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
            prime[i]=false;
        }
    }
    for(int i=2;i<n;i++)
    {
        if(prime[i])
        v.pb(i);

    }
    //cout<<v.size();
}
                                                                                               
void solve()
{
    int nn,x,y,z,c,d;
    cin>>nn;
    int a[nn];
    loop(i,0,nn)
    cin>>a[i];
    x=0,y=0;
    y=nn/2;
    if(nn==1)
    {
        cout<<0<<'\n';
        return ;
    }
    cout<<(nn+1)/2<<'\n';
    while (y--)
    {
        
        z=min(a[x],a[x+1]);
        cout<<x+1<<' '<<x+2<<' '<<z<<' '<<mod<<'\n';
        a[x]=z;
        a[x+1]=mod;
        x+=2;
    }
    if(nn%2)
    {
        z=min(a[x-1],a[x]);
        cout<<x<<' '<<x+1<<' '<<mod<<' '<<z<<'\n';
    }
    
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //seive();
    test
    solve();
    return 0;
}