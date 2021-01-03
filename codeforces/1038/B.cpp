#include<iostream>
using namespace std;
int main()
{
    int n,a;
    cin>>n;
    if(n<3)
    {
        cout<<"No";
        return 0;
    }
    int s=n*(n+1)/2;
    for(int i=2;i<=n;i++)
    {
        if(s%i==0)
        {
            a=i;
            break;
        }
    }
    cout<<"Yes"<<endl;
    cout<<1<<' '<<a<<endl;
    cout<<n-1<<' ';
    for(int i=1;i<=n;i++)
    {
        if(i!=a)
        {
            cout<<i<<' ';
        }
    }
    return 0;
}