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
    int n,r,avg,req,x,y,av=0,ans=0,diff,b,j=0;
    cin>>n>>r>>avg;
    pair<int,int> p[n];
    req=avg*n;
    loop(i,0,n)
    {
        cin>>x>>y;
        p[i].first=y;
        p[i].second=x;
        av+=x;
    }
    sort(p,p+n);
    diff=req-av;
    while(diff>0)
    {
        b=p[j].second;
        if(diff>(r-b))
        {
            ans+=(r-b)*p[j].first;
            diff=diff-(r-b);
        }
        else
        {
            ans+=diff*p[j].first;
            diff=0;
        }
        j++;
    }
    cout<<ans;
    return 0;
}