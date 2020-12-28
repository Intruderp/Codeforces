#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c1=0,c2=0,x1,x2,b,m1=0,m2=0,j1=-1,j2=-1,a1=-1,a2=-1,c3,c4;
    cin>>n;
    int a[n][2];
    for(int i=0;i<n;i++)
    {
        cin>>a[i][0]>>a[i][1];
        c1+=a[i][0];
        c2+=a[i][1];
    }
    c3=c1;
    c4=c2;
    b=abs(c1-c2);
    //cout<<c1<<' '<<c2<<endl;
    for(int i=0;i<n;i++)
    {
        if(a[i][0]-a[i][1]>0 && a[i][0]-a[i][1]>m1)
        {
            m1=a[i][0]-a[i][1];
           
            j1=i;
            // cout<<m1<<' '<<j1<<endl;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i][1]-a[i][0]>0 && a[i][1]-a[i][0]>m2)
        {
            m2=a[i][1]-a[i][0];
            j2=i;
        }
    }
    if(j1!=-1)
    {
        x1=a[j1][0];
        x2=a[j1][1];
        c1=c1-x1+x2;
        c2=c2-x2+x1;
        a1=abs(c1-c2);

        
    }
    if(j2!=-1)
    {
        x1=a[j2][0];
        x2=a[j2][1];
        c3=c3-x1+x2;
        c4=c4-x2+x1;
        a2=abs(c3-c4);

    }
    //

    ///cout<<b<<' '<<a1<<' '<<a2;
    if(a1>=a2 && a1>b)
    cout<<j1+1;
    else if(a2>=a1 && a2>b)
    cout<<j2+1;
    else
    {
        cout<<0;
    }
    return 0;
    





}