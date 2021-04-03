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
                                                                                                   
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,d;
    cin>>n>>d;
    pair<int,int> p[n];
    pair<int,int> px;
    loop(i,0,n)
    cin>>p[i].first>>p[i].second;
    sort(p,p+n);
    loop(i,1,n)
    p[i].second+=p[i-1].second;
    int ans=0,x;
    loop(i,0,n)
    {
        px=make_pair(p[i].first+d,0);
        auto it=upper_bound(p,p+n,px);
        it--;
        if(i==0)
        x=it->second;
        else 
        x=it->second-p[i-1].second;
        ans=max(ans,x);
    }
    cout<<ans;
    return 0;
}