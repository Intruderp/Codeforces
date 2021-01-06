#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,nn;
    cin>>n>>m;
    nn=n;
    int a[m],b[m];
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    int min=1001,max=0,c1=0,c2=0,j1,j2;
    while(n>0)
    {
        min=1001;
        max=0;
        for(int i=0;i<m;i++)
        {
            if(a[i]>max)
            {
                max=a[i];
                j1=i;
            }
        }
        if(max>0)
        {
            c1+=max;
            a[j1]--;
        }
        n--;
        
    }
    c2=0;
    while(nn>0)
    {
        min=1001;
        for(int i=0;i<m;i++)
        {
            if(b[i]<min && b[i]!=0)
            {
                min=b[i];
                j2=i;
            }
        }
        c2+=min;
        b[j2]--;
        nn--;
    }
    cout<<c1<<' '<<c2;
    return 0;
}