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
    int m,n,p1,p2,ans=0,e,r;
    cin>>n>>m;
    e=n/m;
    r=n%m;
    p1=e+1;
    p2=e;
    ans+=((p1*(p1-1))/2)*r;
    ans+=(p2*(p2-1)/2)*(m-r);
    p1=n-m+1;
    cout<<ans<<' '<<(p1*(p1-1))/2;


    return 0;
}