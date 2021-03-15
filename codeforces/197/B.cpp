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
    int n,m,a1,b1,x,y;
    cin>>n>>m;
    loop(i,0,n+1)
    {
        cin>>x;
        if(i==0)
        a1=x;
    }
    loop(i,0,m+1)
    {
        cin>>y;
        if(i==0)
        b1=y;
    }
    if(n>m)
    {
        if(a1>0 && b1>0)
        cout<<"Infinity";
        else if(a1<0 && b1<0)
        cout<<"Infinity";
        else
        cout<<"-Infinity";
    }
    else if(m>n)
    cout<<"0/1";
    else if(m==n)
    {
        int g=__gcd(abs(a1),abs(b1));
        if((a1>0 && b1>0) || (a1<0 && b1<0))
        cout<<abs(a1)/g<<'/'<<abs(b1)/g;
        else  
        cout<<'-'<<abs(a1)/g<<'/'<<abs(b1)/g;
    }
    return 0;
}