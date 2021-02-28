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
int b1=-1,b2=-1;
int isSorted(int a[],int n)
{
    int k=0;
    loop(i,0,n)
    {
        if(a[i]==i+1)
        k++;
        else
        break;
    }
    return k;
}
int is(int a[],int n)
{
    int k=n;
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]==i+1)
        k--;
        else
        break;
    }
    return k;
}
bool c(int a[],int n ,int i,int j)
{
    for(int k=i;k<j;k++)
    {
        if(a[k]==k+1)
        return true;

    }
    return false;
}
                                                                                                   
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        loop(i,0,n)
         cin>>a[i];
        int i=isSorted(a,n);
        int j=is(a,n);
       // cout<<i<<j<<endl;
        if(i==n)
        cout<<0;
        else
        {
            if(c(a,n,i,j))
            cout<<2;
            else
            cout<<1;
        }
        
        cout<<'\n';
    }
    
    
    
    return 0;
}