#include <iostream>
using namespace std;
int main()
{
    int n,x,y,c=0,cc=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        if(x>y)
        c++;
        else if(y>x)
        {
            cc++;;
        }
        
        
    }
    if(c>cc)
    cout<<"Mishka";
    else if(cc>c)
    cout<<"Chris";
    else
    {
        cout<<"Friendship is magic!^^";
    }
    return 0;
    
}