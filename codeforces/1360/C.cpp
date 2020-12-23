#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector <int> v(n);
        for(int i=0;i<n;i++)
         cin>>v[i];
         sort(v.begin(),v.end());
         int c1=0,c2=0,c3=0;
         for(int i=0;i<n;i++)
         {
             if(v[i]%2==0)
             c2++;
             else
             {
                 c1++;
             }
             if(i+1<n && v[i+1]-v[i]==1)
             c3++;
             
         }
         if(c1%2==0 && c2%2==0)
         {
             cout<<"YES"<<endl;
         }
         else
         {
             if(c3>=1)
             cout<<"YES"<<endl;
             else
             {
                 cout<<"NO"<<endl;
             }
             
         }
         
    }
    return 0;
}