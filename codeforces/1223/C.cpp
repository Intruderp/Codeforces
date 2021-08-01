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
const int sz=1e6;
int arr[sz],n,x,y,a,b,z,l,k;
int lcm(int x,int y)
{
    return x*y/(__gcd(x,y));
}
bool check(int m)
{
    int ans=0;
    int i=l,j=1;
    while(i<=m and j<=n)
    {
        ans+=(x+y)*(arr[j-1]/100);
        i+=l;
        j++;
    }
    if(x>y)
    {
        i=a;
        while(i<=m and j<=n)
        {
            if(i%l==0)
            {
                i+=a;
                continue;
            }
            ans+=x*(arr[j-1]/100);
            j++;
            i+=a;
        }
        i=b;
        while(i<=m and j<=n)
        {
            if(i%l==0)
            {
                i+=b;
                continue;
            }
            ans+=y*(arr[j-1]/100);
            j++;
            i+=b;
        }
    }
    else
    {
        i=b;
        while(i<=m and j<=n)
        {
            if(i%l==0)
            {
                i+=b;
                continue;
            }
            ans+=(y)*(arr[j-1]/100);
            j++;
            i+=b;
        }
        i=a;
        while(i<=m and j<=n)
        {
            if(i%l==0)
            {
                i+=a;
                continue;
            }
            ans+=x*(arr[j-1]/100);
            j++;
            i+=a;
        }
    }
    return ans>=k;
}
void solve()
{
    cin>>n;
    loop(i,0,n)
    cin>>arr[i];
    x=0;
    cin>>x>>a>>y>>b>>k;
    sort(arr,arr+n);
    reverse(arr,arr+n);
    int h=n,low=1,ans=-1,mid;
    l=lcm(a,b);
    while(h>=low)
    {
        mid=(h+low)/2;
        if(check(mid))
        {
            ans=mid;
            h=mid-1;
        }
        else 
        low=mid+1;
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