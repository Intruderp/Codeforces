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
    int n,x,y;
    cin>>n;
    pii v1[n],v2[n];
    loop(i,0,n)
    {
        cin>>v1[i].first>>v1[i].second;
        v2[i].first=v1[i].first;
        v2[i].second=v1[i].second;
    }
    sort(v1,v1+n);
    int mx=0,a=-1,c=1;
    for(int i=0;i<n-1;i++)
    {
        mx=max(mx,v1[i].second);
        if(v1[i+1].first>mx)
        {
            a=i+1;
            break;
        }
    }
    if(a==-1)
    {
        cout<<"-1\n";
        return ;
    }
    map<pii,int> m;
    for(int i=0;i<n;i++)
    {
        if(i>=a)
        c=2;
        m[{v1[i].first,v1[i].second}]=c;
    }
    for(int i=0;i<n;i++)
    cout<<m[{v2[i].first,v2[i].second}]<<' ';
    cout<<"\n";
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