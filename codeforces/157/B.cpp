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
    int n;
    cin>>n;
    double r[n+1];
    double pie=3.1415926536,ans=0;
    loop(i,0,n)
    {
        cin>>r[i];
    }
    r[n]=0;
    sort(r,r+n);
    reverse(r,r+n);
    int i;
    for(i=0;i<n;i+=2)
    {
        ans+=(r[i]*r[i]-r[i+1]*r[i+1]);
       // cout<<r[i]*r[i]-r[i+1]*r[i+1]<<endl;
       // cout<<ans<<endl;
    }
    //cout<<i<<endl;
    printf("%.12lf",ans*pie);
    return 0;
}