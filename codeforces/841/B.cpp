#include <iostream>
using namespace std;
int main()
{
    long long n,s=0,e=0;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s+=a[i];
        if(a[i]%2==0)
        e++;
    }
    if(s%2!=0)
    {
        cout<<"First";
    }
    else
    {
        if(e==n)
        cout<<"Second";
        else
        {
            cout<<"First";
        }
        
    }
    return 0;
    
}