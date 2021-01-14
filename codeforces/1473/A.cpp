#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,d;
    cin>>t;
    while(t--)
    {
        cin>>n>>d;
        int a[n];
        bool b=true;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>d)
            {
                b=false;
            }
        }
        sort(a,a+n);
        if(a[0]+a[1]<=d || b)
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