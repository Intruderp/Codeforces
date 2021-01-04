#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>n;
        long long c=1;
        while(a%2==0)
        {
            if(a%2==0)
            {
                c=c*2;
                a=a/2;
            }
            if(c>=n)
            {
                break;
            }
        }
        while(b%2==0 && c<n)
        {
            if(b%2==0)
            {
                b=b/2;
                c=c*2;
            }
        }
        if(c>=n)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
        cout<<endl;
    }
    return 0;
}