#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
      cin>>a[i];
    sort(a,a+n);
    if(a[0]+a[n-2]>a[n-1])
    {
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++)
          cout<<a[i]<<' ';
    }
    else if(a[n-2]+a[n-3]>a[n-1])
    {
        int temp;
        temp=a[n-1];
        a[n-1]=a[n-2];
        a[n-2]=temp;
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++)
          cout<<a[i]<<' ';
         // cout<<"hello";

    }
    else{
        cout<<"NO";
    }
    return 0;
}