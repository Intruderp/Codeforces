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
    int n,t;
    cin>>t;
    while (t--)
    {
        cin>>n;
        int a[n],sum=0;
        loop(i,0,n){
            cin>>a[i];
            sum+=a[i];
        }
        int x=n;
        while (x>1)
        {
           int c=0,s=0;
           if(sum%x==0)
           {
               for(int i=0;i<n;i++)
               {
                   s+=a[i];
                   if(s==sum/x)
                   {
                       s=0;
                       c++;
                   }
               }
               if(c==x)
               break;
           }
           x--;
        }
        cout<<n-x<<'\n';
    }
    
    return 0;
}