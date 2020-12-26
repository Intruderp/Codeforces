#include<iostream>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++)
     cin>>a[i];
     long long r=0,c=0,m=0;
     m+=a[0];
     for(int i=0;i<n-1;i++)
     {
         if(a[i]>=a[i+1])
         {
             c+=a[i]-a[i+1];
            // cout<<c<<endl;
             continue;
         }
         r=a[i+1]-a[i];
         if(c>=r)
         {
             c=c-r;
             //cout<<c;
         }
         else
         {
             m+=r-c;
             c=0;
         }
         

     }
     cout<<m;
     return 0;
}