#include<iostream>
using namespace std;
int main()
{
    long long s1,s2,n,k,t;
    cin>>t;
   while(t--)
   {
        cin>>n>>k;
        s1=k*k;
    if(n==2 || (n==5 && k!=1) ||(n==7 && k!=1))
    {
        cout<<"NO"<<endl;
        continue;
    }
    if(s1>n)
    {
        cout<<"NO"<<endl;
        continue;
    }
    if(k%2==0 && n%2!=0)
    {
        cout<<"NO"<<endl;
    }
    else if(n%2==0 && k%2!=0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
   } 
    return 0;
}