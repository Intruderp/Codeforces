#include <iostream>
using namespace std;
int main()
{
    int t,a,b;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b;
        int x=abs(a-b);
       // cout<<x<<endl;
        if(x==0)
        cout<<0<<endl;
        else if(x<=10)
        cout<<1<<endl;
        else 
        {
            
            if(abs(a-b)%10==0)
            cout<<x/10<<endl;
            else
            {
                cout<<x/10+1<<endl;
            }
            
        }
    }
    return 0;
}