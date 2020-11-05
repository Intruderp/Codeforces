#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,c=0,cc=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        int a[n];
        for(int j=0;j<n;j++)
        {
            a[j]=pow(2,(j+1));
        }
        c=0;
        cc=0;
        for(int j=0;j<n;j++)
        {
            if(j==n-1 || j<(n/2-1))
           { c+=a[j];
             //cout<<a[j]<<'b'<<endl;
           }
            else
            {
                cc+=a[j];
               // cout<<a[j]<<'e'<<endl;
            }
            
        }
        cout<<c-cc<<endl;
    }
    return 0;
}