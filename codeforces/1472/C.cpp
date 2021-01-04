#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector <int> b(n);
        b[n-1]=a[n-1];
        for(int i=n-2;i>=0;i--)
        {
            if(i+a[i]<n)
            {
                b[i]=a[i]+b[i+a[i]];
            }
            else
            {
                b[i]=a[i];
            }
            //cout<<b[i]<<endl;
        }
        cout<<*max_element(b.begin(),b.end())<<endl;
    }
    return 0;
}