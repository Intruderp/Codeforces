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
    int n,x=0,y=0;
    cin>>n;
    int a[n],sum=0,ans=0,ans1=0;
    loop(i,0,n)
    {
        cin>>a[i];
        sum+=a[i];
    }
    if(sum%n)
    {
        x=sum/n;
        y=x+1;
    }
    else
    x=y=sum/n;
    loop(i,0,n)
    {
        if(a[i]!=x && a[i]!=y)
        {
            if(a[i]>y)
            ans+=a[i]-y;
            if(a[i]<x)
            ans1+=x-a[i];
        }
    }
    cout<<max(ans1,ans);
} 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // test
    solve();
    return 0;
}