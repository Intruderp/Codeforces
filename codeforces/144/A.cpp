#include <iostream>
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
    int i,j;
    i=0;
    j=n-1;
    for(int k=0;k<n;k++)
    {
        if(a[k]>a[i])
        {
            i=k;
        }
        if(a[n-1-k]<a[j])
        j=n-1-k;
    }
    if(i==j)
    cout<<0;
    else if(j>i)
    cout<<i+n-j-1;
    else
    {
        cout<<i+n-j-2;
    }
    return 0;
    

}