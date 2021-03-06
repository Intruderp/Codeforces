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
    int n,m,x,c=0,ans=0;
    cin>>n>>m;
    if(m==0)
    {
        cout<<"YES";
        return 0;
    }
    vi v;
    bool b=false;
    loop(i,0,m)
    {
        cin>>x;
        if(x==1 || x==n)
        {
            b=true;
        }
        v.pb(x);
    }
    sort(v.begin(),v.end());
    loop(i,0,v.size()-1)
    {
        if(v[i]+1==v[i+1])
        c++;
        else
        {
            ans=max(ans,c);
            c=0;
        }
    }
    ans=max(ans,c);
    if(ans>1 || b)
    cout<<"NO";
    else
    cout<<"YES";
    return 0;
}