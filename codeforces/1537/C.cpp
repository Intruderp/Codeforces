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
    int n;
    cin>>n;
    int a[n];
    loop(i,0,n)
    cin>>a[i];
    sort(a,a+n);
    int d=INT_MAX,x,d2,d3,d4;
    for(int i=1;i<n-2;i++)
    {
        if(a[i+1]-a[i]<d)
        {
            d=a[i+1]-a[i];
            x=i;
        }
    }
    d2=a[1]-a[0];
    d3=a[n-1]-a[n-2];
    d4=min({d2,d3,d});
    if(d4==d)
    {
        cout<<a[x]<<' ';
        for(int i=x+2;i<n;i++)
        cout<<a[i]<<' ';
        for(int i=0;i<x;i++)
        cout<<a[i]<<' ';
        cout<<a[x+1]<<'\n';
    }
    else if(d4==d2)
    {
        x=0;
        cout<<a[x]<<' ';
        for(int i=x+2;i<n;i++)
        cout<<a[i]<<' ';
        for(int i=0;i<x;i++)
        cout<<a[i]<<' ';
        cout<<a[x+1]<<'\n';
    }
    else
    {
        x=n-2;
        cout<<a[x]<<' ';
        for(int i=x+2;i<n;i++)
        cout<<a[i]<<' ';
        for(int i=0;i<x;i++)
        cout<<a[i]<<' ';
        cout<<a[x+1]<<'\n';
    }
    
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