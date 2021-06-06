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
    int x,y,z;
    cin>>x>>y;
    vi v;
    v.pb(0);
    v.pb(1);
    v.pb(2);
    if(x==y)
    cout<<x;
    else 
    {
        for(int i:v)
        {
            if(i!=x && i!=y)
            z=i;
        }
        cout<<z;
    }
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