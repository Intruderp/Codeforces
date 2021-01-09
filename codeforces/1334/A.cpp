#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n][2];
        for(int i=0;i<n;i++)
        {
            cin>>a[i][0]>>a[i][1];
        }
        bool b=true;
        for(int i=0;i<n;i++)
        {
            if(a[i][1]>a[i][0])
            {
                b=false;
                break;
            }
            if(i+1<n)
            {
                if(a[i+1][0]<a[i][0] || a[i+1][1]<a[i][1])
                {
                    b=false;
                    break;
                }
                if(a[i+1][1]>a[i][1] && a[i+1][0]<=a[i][0])
                {
                    b=false;
                    break;
                }
                int d1=a[i+1][1]-a[i][1];
                int d2=a[i+1][0]-a[i][0];
                if(d1>d2)
                {
                    b=false;
                    break;
                }
            }
        }
        if(b)
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