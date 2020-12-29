#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,s=0;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
      cin>>a[i];
    map <int,int> m;
    for(int i=0;i<k;i++)
    {
      s+=a[i];
    }
    m[s]=0;
    //cout<<s<<endl;
    for(int i=k;i<n;i++)
    {
      s=s+a[i]-a[i-k];
      m[s]=i;
     // cout<<s<<' '<<i<<endl;
    }
    auto it=m.begin();
    if(it->second==0)
    {
      cout<<1;
      return 0;
    }
    cout<<it->second-k+2;
    return 0;
}