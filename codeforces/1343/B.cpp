#include <iostream>
using namespace std;
using namespace std;
int main()
{
    int n,s=0,ss=0,t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        s=0;
        ss=0;
    cin>>n;
    int a,b;
    n=n/2;
    if(n%2!=0)
    {
        cout<<"NO"<<endl;
       // return 0;
    }
    else
    {   
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++)
        {
            a=2*(i+1);
            cout<<a<<' ';
            s+=a;
        }
        for(int i=0;i<n-1;i++)
        {
           // b[i]=a[i]-1;
           b=(i+1)*2-1;
           cout<<b<<' ';
            ss+=b;
        }
        cout<<s-ss<<endl;
       // return 0;

        
    }
    }
    return 0;
    
}