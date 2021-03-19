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
    int n,ans=1e12;
    cin>>n;
    int font[n],cost[n];
    loop(i,0,n)
    cin>>font[i];
    loop(i,0,n)
    cin>>cost[i];
    for(int j=0;j<n;j++)
    {
        int m1=1e9,m2=1e9;
        for(int i=j-1;i>=0;i--)
        {
            if(font[i]<font[j])
            m1=min(m1,cost[i]);
        }
        for(int k=j+1;k<n;k++)
        {
            if(font[k]>font[j])
            m2=min(m2,cost[k]);
        }
        if(m1!=1e9 && m2!=1e9)
        ans=min(ans,m1+m2+cost[j]);
    }
    if(ans==1e12)
    ans=-1;
    cout<<ans;
    return 0;
}