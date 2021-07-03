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
    int n,x,y,h,l,mid,z;
    cin>>n;
    h=n;
    l=1;
    while(true)
    {
        mid=(h+l)/2;
        cout<<"? "<<mid<<endl;
        cin>>x;
        if(x==1)
        {
            cout<<"! "<<mid<<endl;
            return ;
        }
        if(mid+1>n or mid+1<=0)
        y=10000000;
        else
        {
            cout<<"? "<<mid+1<<endl;
            cin>>y;
        }
        if(y==1)
        {
            cout<<"! "<<mid+1<<endl;
            return ;
        }
        if(y<x)
        l=mid+1;
        else
        {
            if(mid-1<=0 or mid-1>n)
            z=10000000;
            else
            {
                cout<<"? "<<mid-1<<endl;
                cin>>z;
            }
            if(z==1)
            {
                cout<<"! "<<mid-1<<endl;
                return ;
            }
            else if(z>x)
            {
                cout<<"! "<<mid<<endl;
                return ;
            }
            else
            h=mid-1;
        }
    }
} 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}