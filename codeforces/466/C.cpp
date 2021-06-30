#include<bits/stdc++.h>
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
#define pr1 cout<<-1<<endl; return ;
#define all(v) v.begin(),v.end()
#define  loop(i,x,n) for(int i=x;i<n;i++)
#define rloop(i,n) for(int i=n-1;i>=0;i--)
#define test int t; cin>>t; while(t--)
using namespace std;
/*************************************************************************************************/
void solve()
{
    int n,s=0,sum=0,ans=0;
    cin>>n;
    int a[n];
    loop(i,0,n)
    {
        cin>>a[i];
        sum+=a[i];
    }
    if(sum%3)
    {
        cout<<0;
        return ;
    }
    vi v;
    for(int i=n-1;i>=0;i--)
    {
        s+=a[i];
        if(s==sum/3)
        v.pb(i);
    }
    reverse(v.begin(),v.end());
    s=0;
    for(int i=0;i<n;i++)
    {
        s+=a[i];
        if(s==sum/3)
        {
            auto it=upper_bound(v.begin(),v.end(),i+1);
            ans+=v.end()-it;
        }
    }
    cout<<ans;
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