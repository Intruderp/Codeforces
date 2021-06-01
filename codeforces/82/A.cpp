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
    vector<string> v;
    v.pb("Sheldon");
    v.pb("Leonard");
    v.pb("Penny");
    v.pb("Rajesh");
    v.pb("Howard");
    int ans,x=0,y=0,a,b,n,req=5;
    cin>>n;
    while (true)
    {
        if(x+req>=n)
        break;
        x+=req;
        req*=2;
    }
    a=n-x;
    //cout<<x<<' '<<req<<endl;
    b=req/5;
    ans=a/b;
    if(a%b==0 and ans!=0)
    ans--;
    cout<<v[ans];
} 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //test
    solve();
    return 0;
}