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
    if(a.second==b.second)
    return a.first>b.first;
    return a.second>b.second;
}
                                                                                                   
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,x,y,ans=0;
    vector <pair<int,int> > v;
    cin>>n;
    loop(i,0,n)
    {
        cin>>x>>y;
        v.pb(make_pair(x,y));
    }
    x=1;
    y=0;
    sort(v.begin(),v.end(),comp);
    auto it=v.begin();
    while (x>0 && y<n)
    {
        ans+=it->first;
        x+=it->second;
        it++;
        y++;
        x--;
    }
    cout<<ans;
    return 0;
}