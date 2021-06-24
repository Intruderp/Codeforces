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
int n;
int lcm(int a,int b,int c)
{
    a=(a*b)/(__gcd(a,b));
    a=(c*a)/(__gcd(a,c));
    return a;
}
bool isprime(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}
int prime(int n)
{
    while(true)
    {
        if(isprime(n))
        return n;
        n--;
    }
    return 2;
}
void solve()
{
    cin>>n;
    int answer=0,a1=0,a2=0,a3=0,a4=0,a5=0,a6=0;
    a4=lcm(n,n,n);
    if(n>2)
    a3=lcm(n,n-1,n-2);
    int p1,p2,p3;
    if(n>3)
    p1=prime(n-2);
    if(n>3)
    a2=lcm(n,n-1,p1);
    p1=prime(n);
    if(n>=2)
    a1=lcm(p1,p1-1,p1-2);
    if(n>3)
    a5=lcm(n-1,n-2,n-3);
    if(n>4)
    a6=lcm(n,n-1,n-3);
    answer=max({a2,a3,a4,a1,a5,a6});
    pr(answer);
} 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}