#include <iostream>
using namespace std;
int main()
{
    int n,x;
    int p=0,c=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x!=-1)
        {
            p=p+x;
        }
        else if(x==-1 && p-1<0)
        {
            c++;   
        }
        if(p!=0 && x==-1)
        {
          p=p-1;
        } 
    }    
        cout<<c;
        return 0;
        
    
}