#include<iostream>
using namespace std;
int main()
{
    int x=-1,y=0,n,a,b;
    cin>>n>>a>>b;
    while(n>=y*b)
    {
        if((n-y*b)%a==0)
        {
            x=(n-y*b)/a;
            break;
        }
        else
        {
            y++;
        }
        
    }
    if(x==-1)
    cout<<"NO";
    else
    {
        cout<<"YES"<<endl;
        cout<<x<<' '<<y;
    }
    return 0;
    
}