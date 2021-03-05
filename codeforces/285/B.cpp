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
    int n,aa,b,x,y,ans=0;
    cin>>n>>aa>>b;
    int a[n+1];
    loop(i,1,n+1)
    cin>>a[i];
    x=aa,y=b;
    while(n--)
    {
        if(x==y)
        break;
        x=a[x];
        ans++;
    }
    if(x==y)
    cout<<ans;
    else
    cout<<-1;
    return 0;
}