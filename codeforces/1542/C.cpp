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
int lcm(int a,int b)
{
    return (a*b)/(__gcd(a,b));
}
void solve()
{
    int n,ans=0,local_ans=0,x=1,p1=1,p2=1,l=1;
    cin>>n;
    while(true)
    {
        p1=lcm(p1,x);
        p2=lcm(p2,x+1);
        x++;
        local_ans=(((n/p1-n/p2)%mod)*(x))%mod;
        //cout<<x<<' '<<p1<<' '<<p2<<' '<<local_ans<<endl;
        ans=(ans%mod+local_ans%mod)%mod;
        if(p1>n)
        break;
    }
    pr(ans)
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