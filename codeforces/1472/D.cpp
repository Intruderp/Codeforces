#include<bits/stdc++.h>
using namespace std;
bool gr(long long a,long long b)
{
    return a>b;
}
int main()
{
    long long t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n,gr);
        long long c1=0,c2=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                if(a[i]%2==0)
                {
                    c1+=a[i];
                }
            }
            else
            {
                if(a[i]%2!=0)
                {
                    c2+=a[i];
                }
            }

        }
        if(c1>c2)
        cout<<"Alice";
        else if(c2>c1)
        cout<<"Bob";
        else
        {
            cout<<"Tie";
        }
        cout<<endl;
    }
    return 0;
}