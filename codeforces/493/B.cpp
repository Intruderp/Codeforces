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
    int n,s1=0,s2=0,x,y,j=0,k=0;
    string ans="";
    cin>>n;
    vi f(n,0),s(n,0);
    loop(i,0,n)
    {
        cin>>x;
        if(x>0)
        {
            f[j]=x;
            j++;
            s1+=x;
            if(i==n-1)
            ans="first";
        }
        else
        {
            s[k]=abs(x);
            k++;
            s2+=abs(x);
            if(i==n-1)
            ans="second";
        } 
    }
    if(s1>s2)
    cout<<"first";
    else if(s1<s2)
    cout<<"second";
    else
    {
       loop(i,0,n)
       {
           //cout<<f[i]<<' '<<s[i]<<endl;
           if(f[i]>s[i])
           {
               cout<<"first";
               return 0;
           }
           if(f[i]<s[i])
           {
               cout<<"second";
               return 0;
           }
       } 
       cout<<ans;
    }
    
    return 0;
}