#include<iostream>
using namespace std;
int main()
{
    int a,b,t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a==b)
        {
            cout<<a-1<<' '<<b<<endl;
        }
        else if(a>b)
        {
            cout<<a-1<<' '<<b<<endl;
        }
        else
        {
            cout<<a-1<<' '<<b<<endl;
        }
        
    }
    return 0;
}