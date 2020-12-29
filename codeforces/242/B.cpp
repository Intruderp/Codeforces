#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,min=pow(10,9),max=0,x,y,ans=-1;
    cin>>n;
    int a[n][2];
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        a[i][0]=x;
        a[i][1]=y;
        if(x<min)
        min=x;
        if(y>max)
        max=y;
    }
    for(int i=0;i<n;i++)
    {
        if(a[i][0]==min && a[i][1]==max)
        ans=i+1;
    }
    if(ans==-1)
    cout<<-1;
    else
    {
        cout<<ans;
    }
    return 0;
    

}