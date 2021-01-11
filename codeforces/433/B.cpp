#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x,y,z;
    cin>>n;
    int a[n],b[n];
    vector<long long> s1(n,0),s2(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b,b+n);
    s1[0]=a[0];
    s2[0]=b[0];
    for(int i=1;i<n;i++)
    {
        s1[i]=s1[i-1]+a[i];
        s2[i]=s2[i-1]+b[i];
    }
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>x>>y>>z;
        if(x==1)
        {
            if(y==1)
            {
                cout<<s1[z-1];
            }
            else
            {
                cout<<s1[z-1]-s1[y-2];
            }
            
        }
        else
        {
            if(y==1)
            {
                cout<<s2[z-1];
            }
            else
            {
                cout<<s2[z-1]-s2[y-2];
            }
        }
        cout<<endl;
        
    }
    return 0;
}