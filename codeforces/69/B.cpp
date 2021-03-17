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
    int n,mm,l,r,t,c,ans=0,mx=0;
    map<int,vi > m;
    cin>>n>>mm;
    for(int i=1;i<=mm;i++)
    {
        cin>>l>>r>>t>>c;
        m[i].pb(l),m[i].pb(r),m[i].pb(t),m[i].pb(c);
    }
    for(int i=1;i<=n;i++)
    {
        vi v1,v2;
        for(auto it:m)
        {
            l=it.second[0],r=it.second[1],t=it.second[2],c=it.second[3];
            if(i>=l && i<=r)
            {
                v1.pb(t);
                v2.pb(c);
            }
        }
        if(v1.size()==0)
        continue;
        //cout<<v1.size()<<' '<<v2.size()<<endl;
        int mn=*min_element(v1.begin(),v1.end());
        mx=0;
        for(int j=0;j<v1.size();j++)
        {
            if(v1[j]==mn)
            {
                mx=max(mx,v2[j]);
                break;
            }
        }
        ans+=mx;
    }
    cout<<ans;
    return 0;
}