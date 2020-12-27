#include <iostream>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
     cin>>a[i];
    x=a[n-1];
    if(x==0)
    {
        cout<<"UP";
        return 0;
    }
    if(x==15)
    {
        cout<<"DOWN";
        return 0;
    }
    if(n==1)
    {
        cout<<-1;
        return 0;
    }
    if(x>a[n-2])
    {
        cout<<"UP";
        return 0;
    }
    cout<<"DOWN";
   // cout<<x<<' '<<a[n-2];
    return 0;

}