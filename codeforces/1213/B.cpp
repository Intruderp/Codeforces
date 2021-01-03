#include<iostream>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n],c=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int m=a[n-1];
        for(int i=n-2;i>=0;i--)
        {
            if(a[i]>m)
            {
                c++;
            }
            if(m>a[i])
            m=a[i];
        }
        cout<<c<<endl;
    }
    return 0;
}