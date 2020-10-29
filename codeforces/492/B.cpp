#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,x,d,d1,d2;
    cin>>n>>l;
    vector <int> v;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    if(n>1)
    d=v[1]-v[0];
    else
    {
        d=0;
    }
    
    for(int i=0;i<n;i++)
    {
        if(v[i+1]-v[i]>d && i+1<n)
        d=v[i+1]-v[i];
    }
    double  f,r;
    f=((double)d/2);
    d1=v[0];
    d2=l-v[n-1];
    r=max(int(f),max(d1,d2));
    if(r==int(f))
    cout<<fixed<<setprecision(9)<<((double)d/2);
    else
    {
        cout<<max(d1,d2);
    }
    
    
    return 0;
    
}