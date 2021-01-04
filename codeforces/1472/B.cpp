#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n],c1=0,c2=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==1)
            c1++;
            else if(a[i]==2)
            c2++;
        }
        if(c1%2==0 && c2%2==0)
        {
            cout<<"YES";
            
        }
        else if(c1%2==0 && c2%2!=0)
        {
            if(c1==0)
            {
                cout<<"NO";
            }
            else
            {
                cout<<"YES";
            }
        }
        else
        {
            cout<<"NO";
        }
        cout<<endl;
    }
    return 0;
}