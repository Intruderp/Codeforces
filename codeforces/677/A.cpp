#include <iostream>
using namespace std;
int main()
{
    int n,h,w=0,x;
    cin>>n>>h;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x>h)
        w+=2;
        else
        {
            w++;
        }
        
    }
    cout<<w;
    return 0;
}