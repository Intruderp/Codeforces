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
using namespace std;
/*************************************************************************************************/
bool comp(pair<int,int> a,pair<int,int> b)
{
    int d1=a.second-a.first;
    int d2=b.second-b.first;
    return d1>d2;
}
                                                                                                   
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,k;
    cin>>n>>k;
    pair<int,int> p[n];
    int a[n],b[n];
    loop(i,0,n)
    cin>>a[i];
    loop(i,0,n)
    cin>>b[i];
    loop(i,0,n)
    p[i].first=a[i],p[i].second=b[i];
    sort(p,p+n,comp);
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(k>0)
        ans+=p[i].first,k--;
        else 
        ans+=min(p[i].first,p[i].second);
    }
    cout<<ans;
    return 0;
}