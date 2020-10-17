/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n,x,y,z;
    int c1=0,c2=0,c3=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y>>z;
        c1+=x;
        c2+=y;
        c3=c3+z;
        
    }
    if(c1==0 && c2==0 & c3==0)
    cout<<"YES";
    else
    cout<<"NO";

    return 0;
}
