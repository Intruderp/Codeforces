#include <iostream>
using namespace std;

int main()
{
    int n,x;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x==1)
        {
            break;
        }
    }   
        if(x==0)
        {
            cout<<"EASY";
        }
        else
        {
            cout<<"HARD";
        }
        return 0;
        
    
    
}