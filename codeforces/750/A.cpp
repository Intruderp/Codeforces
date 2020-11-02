#include <iostream>
using namespace std;
int main()
{
    int n,k,c=0;
    cin>>n>>k;
    int t=240-k,r=0;
    for(int i=1;i<=n;i++)
    {
        r+=5*i;
        if(r<=t)
        c++;
        else
        {
            break;
        }
        
    }
    cout<<c;
    return 0;
}