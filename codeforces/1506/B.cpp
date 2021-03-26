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
    int t,n,k;
    string s;
    cin>>t;
    while (t--)
    {
        cin>>n>>k>>s;
        int ans=0,i=-1,j=-1;
        for(int in=0;in<n;in++)
        {
            if(s[in]=='*')
            {
                if(i!=-1)
                j=in;
                if(i==-1)
                i=in;
            }
        }
     if(i!=-1 && j!=-1)
     {
         while(true)
         {
             int p=-1;
             for(int in=i+1;in<=(i+k) && in<n;in++)
             {
                 if(s[in]=='*')
                 {
                     p=in;
                 }
             }
             if(p!=-1 && p<j)
             {
                 ans++;
                 i=p;
             }
             if(p==-1 || p>=j)
             break;
         }
     }
     if(i!=-1)
     ans++;
     if(j!=-1)
     ans++;
     cout<<ans<<'\n';
    }
    return 0;
}