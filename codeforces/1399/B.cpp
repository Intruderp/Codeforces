#include <bits/stdc++.h>
using namespace std;
void moves(int n ,vector <int> a,vector <int> b)
{
    int m=*min_element(a.begin(),a.end());
    int M=*min_element(b.begin(),b.end());
    //cout<<"max"<<m<<M<<endl;
    int i=0,o,oo;
    long long c=0;
    while(i<n)
    {
       /*  if(a[i]==m && b[i]==M)
         {
             i++;
             continue;
         }*/
         o=a[i]-m;
         oo=b[i]-M;
         //cout<<o<<oo<<endl;
         c+=max(o,oo);
         a[i]=a[i]-o;
         b[i]=b[i]-oo;
         i++;
        
        
    }
    cout<<c<<endl;

}
int main()
{
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        vector <int> a(n);
        vector <int> b(n);
        
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        for(int j=0;j<n;j++)
        {
            cin>>b[j];
        }
        moves(n,a,b);

    }
    return 0;
}