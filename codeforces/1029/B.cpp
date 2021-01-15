#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int m=1,x=1;
    for(int i=0;i<n;i++)
    {
        if(i+1<n && a[i+1]<=2*a[i])
        {
            m++;
            x=max(x,m);
        }
        else
        {
            m=1;
        }
    }
    cout<<x;
    return 0;
}