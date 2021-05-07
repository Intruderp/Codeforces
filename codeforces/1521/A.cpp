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
                                                                                                   
void solve()
{
    int a,b,x,y=-1,z=-1,c,d,q=1,dd=-1;
    cin>>a>>b;
    x=a*b;
    c=1000;
    while (c--)
    {
        d=q*a;
        if(d%(a*b))
        {
            dd=x+d;
            if(dd%(a*b))
            {
                y=d;
                z=dd;
            }
        }
    }
    if(y!=-1)
    {
        cout<<"YES\n";
        cout<<x<<' '<<y<<' '<<z<<'\n';
    }
    else 
    cout<<"NO\n";
    
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