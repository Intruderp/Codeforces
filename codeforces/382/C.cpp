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
    int n,ans=0;
    cin>>n;
    int a[n];
    loop(i,0,n)
    cin>>a[i];
    sort(a,a+n);
    if(n==1)
    cout<<-1;
    else if(n==2)
    {
        ans=2;
        if(a[0]==a[1])
        {
            cout<<1<<endl<<a[0];
            return;
        }
        if((a[0]+a[1])%2==0)
        ans++;
        cout<<ans<<endl;
        cout<<a[0]-(a[1]-a[0])<<' ';
        if(ans==3)
        cout<<(a[0]+a[1])/2<<' ';
        cout<<a[1]+(a[1]-a[0]);

    }
    else 
    {
        mp m;
        for(int i=0;i<n-1;i++)
        m[a[i+1]-a[i]]++;
        if(m.size()>2)
        cout<<0;
        else if(m.size()==1)
        {
            int x,y;
            x=a[0]-(a[1]-a[0]);
            y=a[n-1]+(a[1]-a[0]);
            if(x==y)
            cout<<1<<endl<<x;
            else 
            cout<<2<<endl<<x<<' '<<y;
        }
        else 
        {
            int x=-1,y=-1;
           for(auto it:m)
           {
               if(it.second==1)
               x=it.first;
               if(y==-1 and (n==3 or it.second>1))
               y=it.first;
           }
           //cout<<x<<' '<<y<<endl;
           for(int i=0;i<n-1;i++)
           {
               if(a[i+1]-a[i]==x)
               {
                   x=a[i]+y;
                   y=a[i+1]-y;
                   if(x==y)
                   {
                       cout<<1<<endl;
                       cout<<x;
                       return ;
                   }
               }
           }
           cout<<0;
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