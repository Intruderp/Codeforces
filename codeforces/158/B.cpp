#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int c1=0,c2=0,c3=0,c4=0,t=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        c1++;
        else if(a[i]==2)
        c2++;
        else if(a[i]==3)
        c3++;
        else if(a[i]==4)
        c4++;
    }
    t+=c4;
    if(c3>=c1)
    {
        t+=c3;
        c1=0;
        c3=0;
    }
    else
    {
        t+=c3;
        c1=c1-c3;
        c3=0;
    }
    if(c2%2==0)
    {
        t+=c2/2;
        if(c1%4==0)
        {
            t+=c1/4;
        }
        else
        {
            t+=c1/4+1;
        }
        
        cout<<t;
    }
    else
    {
        t+=c2/2;
        if(c1<=2)
        {
            t+=1;
        }
        else
        {
            t++;
            c1=c1-2;
            if(c1%4==0)
            {
               t+=c1/4;
            }
            else
            {
               t+=c1/4+1;
            }
        }
        cout<<t;
    }
    return 0;
    
    
}