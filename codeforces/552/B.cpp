#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n,q,len;
    cin>>n;
    int x,u,l;
    string s;
    s=to_string(n);
    x=s.length();
    long long c=0;
    //int k=1;
   // u=pow(10,(x-1));
   u=1;
   for(int i=1;i<x;i++)
   {
       u=u*10;
   }

    l=u/10;
    //cout<<l<<' '<<u<<endl;
    while(u!=1)
    {
        q=u-l;
        s=to_string(l);
        len=s.length();
        c+=q*len;
        u=u/10;
        l=l/10;
        //cout<<l<<' '<<u<<endl;
        if(u==0 || l==0)
        {
            break;
        }
    }
    l=pow(10,(x-1));
    q=n-l+1;
    s=to_string(l);
    len=s.length();
    c+=q*len;
    cout<<c;
    return 0;
}