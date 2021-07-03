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
void solve()
{
    int n,l,x,y,z;
    cin>>n;
    int a[n];
    loop(i,0,n)
    cin>>a[i];
    if(n<=3)
    {
        for(int i=0;i<n;i++)
        {
            cout<<i+1<<' '<<i+1<<endl;
            cout<<a[i]*(-1)<<endl;
        }
        if(n==1)
        {
            cout<<n<<' '<<n<<endl<<0<<endl;
            cout<<n<<' '<<n<<endl<<0<<endl;
        }
        if(n==2)
        {
            cout<<n<<' '<<n<<endl<<0<<endl;
        }
        return ;
    }
    cout<<1<<' '<<n<<endl;
    l=n;
    loop(i,0,n)
    {
        if(i==n-1)
        cout<<0<<' ';
        else if(a[i]%l==0)
        {
            cout<<(a[i])*(-1)<<' ';
            a[i]=0;
        }
        else 
        {
            x=a[i];
            cout<<x*(-n)<<' ';
        }
    }
    cout<<endl;
    cout<<1<<' '<<n-1<<endl;
    loop(i,0,n-1)
    cout<<a[i]*(n-1)<<' ';
    cout<<endl;
    cout<<n<<' '<<n<<endl;
    cout<<a[n-1]*(-1);
} 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}