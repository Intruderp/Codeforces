#include <iostream>
using namespace std;
int main()
{
    int n,x,y;
    cin>>n;
    for(x=4;x<=n/2;x++)
    {
        if((x%2==0 ||x%3==0 ||x%5==0 ||x%7==0) && (x!=5) && (x!=7))
        {
            y=n-x;
            if((y%2==0 ||y%3==0 ||y%5==0 ||y%7==0) && (y!=5) && (y!=7))
            {
                cout<<x<<' '<<y;
                break;
            }
        }
    }
    return 0;
}