#include<bits/stdc++.h>
using namespace std;
bool compare(int a,int b)
{
  return a>b;
}  
int main()
{
    long long t,n,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        long long a[n],i;
        for(int i=0;i<n;i++)
         cin>>a[i];
        vector <long long> v;
        long long e=0,r=0,c1=0,c2=0;
        for(i=0;i<n;i++)
        {
            if(a[i]>=x)
            {
                e+=a[i]-x;
                c1++;
            }
            else
            {
                v.push_back(a[i]);
            }
        }
        sort(v.begin(),v.end(),compare);
        for(i=0;i<v.size();i++)
        {
            r=x-v[i];
            if(r<=e)
            {
                c2++;
                e=e-r;
            }
        }
        cout<<c1+c2<<endl;
    }
    return 0;
}