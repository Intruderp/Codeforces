/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n,x,y,c=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        if((y-x)>1)
        c++;
    }
    cout<<c;

    return 0;
}
