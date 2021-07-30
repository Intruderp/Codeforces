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
    int n,ans=0,a1=1e18;
    cin>>n;
    // for(int i=0;i<=100;i++)
    // {
    //     for(int j=0;j<=100;j++)
    //     {
    //         for(int k=0;k<=100;k++)
    //         {
    //             if(i*6+j*8+k*10>=n)
    //             a1=min(a1,i*15+j*20+k*25);
    //             if(a1==130)
    //             {
    //                 cout<<i<<' '<<j<<' '<<k<<endl;
    //                 return ;
    //             }
    //         }
    //     }
    // }
    int x=n/6;
    if(n%6==0)
    ans=15*x;
    else if(n%8==0)
    ans=20*(n/8);
    else if(n%10==0)
    ans=25*(n/10);
    else
    {
        int a,b,c;
        int c1=0,c2=0,c3=0,c4=1e18,c5=1e18,c6=1e18,c7=1e18;
        c1=(n/6+1)*15;
        c2=(n/8+1)*20;
        c3=(n/10+1)*25;
        x=n/10;
        x=n-x*10;
        if(x<=6)
        c4=(n/10)*25+15;
        else if(x<=8)
        c4=(n/10)*25+20;
        c6=(n/10)*25+20+15;
        x=n/8;
        x=n-x*8;
        if(x<=6)
        c5=(n/8)*20+15;
        if((n/8-1)*8+10>=n and (n/8>0))
        c7=(n/8-1)*20+25;
        if((n/8-3)*8+30>=n and n/8>2)
        c7=min(c7,(n/8-3)*20+75);
        if((n/8-2)*8+20>=n and n/8>1)
        c7=min(c7,(n/8-2)*20+50);
       // cout<<c7<<' '<<x<<endl;
        ans=min({c1,c2,c3,c4,c5,c6,c7});

    }
    // if(ans!=a1)
    // cout<<n<<' '<<ans<<' '<<a1;
    cout<<ans;
    cout<<endl;
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