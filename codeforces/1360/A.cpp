#include <iostream>
using namespace std;
int main()
{
    int t,a,b,c;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b;
        c=max(a,b);
        b=min(a,b);
        if(2*b>=c)
        {
            b=2*b;
            cout<<b*b<<endl;
        }
        else
        {
            cout<<c*c<<endl;
        }
        
    }
    return 0;

}