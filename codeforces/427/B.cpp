#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,c,j=0;
    cin>>n>>t>>c;
    int a[n];
    for(int i=0;i<n;i++)
      cin>>a[i];
    vector <int> v;
    v.push_back(0);
    for(int i=0;i<n;i++)
    {
        if(a[i]>t)
        v.push_back(i);
    }
    v.push_back(n);
    int s=0,size,p;
    for(int i=0;i<v.size();i++)
    {
        if(i+1<v.size())
        {
            if(i==0)
            {
                size=v[i+1];
            }
            else
            {
                size=v[i+1]-v[i]-1;
            }
            p=size-c+1;
            if(p>0)
            s+=p;
           // cout<<s<<endl; 
        }
    }
    if(v.size()==2)
    {
        cout<<n-c+1;
    }
    else
    {
        cout<<s;
    }
    return 0;
}