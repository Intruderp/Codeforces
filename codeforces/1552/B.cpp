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
int a[50000][5];
bool better(int x,int y)
{
    int check=0;
    loop(i,0,5)
    {
        if(a[x][i]<a[y][i])
        check++;
    }
    return check>2 ? true : false;
}
void solve()
{
    int n;
    cin>>n;
    loop(i,0,n)
    loop(j,0,5)
    cin>>a[i][j];
    int ans=0;
    loop(i,1,n)
    {
        if(better(i,ans))
        ans=i;
    }
    loop(i,0,n)
    {
        if(i!=ans and !better(ans,i))
        {
            pr(-1)
        }
    }
    pr(ans+1)
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