#include <iostream>
using namespace std;
int main()
{
    int c=1,n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {//cout<<a[i]<<a[i+1]<<endl;
        if(a[i]!=a[i+1] && i+1<n)
        c++;
       //  cout<<a[i]<<" "<<endl;}
    }
    cout<<c;
    return 0;
}