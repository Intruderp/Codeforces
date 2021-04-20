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
    int n,m,l,r,t=0;
    cin>>n>>m;
    l=m;
    r=m;
    t=0;
    int a[n],b[n],c[n];
    loop(i,0,n)
    cin>>a[i]>>b[i]>>c[i];
    loop(i,0,n)
    {
        t=a[i]-t;
        l-=t;
        r+=t;
        if(b[i]>r || l>c[i])
        {
            cout<<"NO\n";
            return ;
        }
        r=min(r,c[i]);
        l=max(l,b[i]);
        t=a[i];
    }
    cout<<"YES\n";
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