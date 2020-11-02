#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int max,min,x,c=0;
    cin>>x;
    max=x;
    min=x;

    
    for(int i=1;i<n;i++)
    {
        cin>>x;
        if(x>max)
        {
            c++;
            max=x;
        }
        if(x<min)
        {
            c++;
            min=x;
        }
    }
    cout<<c;
    return 0;
}