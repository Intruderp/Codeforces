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
#define test int t; cin>>t; while(t--)
using namespace std;
/*************************************************************************************************/
void solve()
{
    int n;
    int a1=0,a2=0;
    cin>>n;
    double a[n];
    loop(i,0,n)
    cin>>a[i];
    loop(i,0,n)
    {
        if(a[i]>0)
        a1+=ceil(a[i]);
        if(a[i]<0)
        a2+=abs(floor(a[i]));
    }
    int x,y;
    if(a1==a2)
    {
        loop(i,0,n)
        {
           x=floor(a[i]);
           y=ceil(a[i]);
           int m1=1,m2=1;
           if(x==-0)
           m1=-1;
           if(y==-0)
           m2=-1;
            if(a[i]>=0)
            cout<<ceil(a[i])<<endl;
            else 
            cout<<floor(a[i])*m1<<endl;
        }
    }
    else if(a1>a2)
    {
        int c1=a1-a2;
        loop(i,0,n)
        {
           x=floor(a[i]);
           y=ceil(a[i]);
           int m1=1,m2=1;
           if(x==-0)
           m1=-1;
           if(y==0)
           m2=-1;
           if(a[i]>=0)
           {
               if(c1>0)
               {
                   if(a[i]-floor(a[i])!=0)
                   c1--;
                   cout<<floor(a[i])<<'\n';
               }
               else 
               cout<<ceil(a[i])<<'\n';
           } 
           else 
           cout<<floor(a[i])*m1<<'\n';
        }
    }
    else
    {
        int c1=a2-a1;
        loop(i,0,n)
        {
          x=floor(a[i]);
           y=ceil(a[i]);
           int m1=1,m2=1;
           if(x==-0)
           m1=-1;
           if(y==0)
           m2=-1;
           if(a[i]<0)
           { 
               if(c1>0)
               {
                   if(a[i]-ceil(a[i])!=0)
                   c1--;
                   cout<<ceil(a[i])*m2<<'\n';
               }
               else 
               cout<<floor(a[i])*m1<<'\n';
           } 
           else 
           cout<<ceil(a[i])<<'\n';
        }
    }
} 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}