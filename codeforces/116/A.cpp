/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int e,ee,stops;
    int m=0,max=0;
    cin>>stops;
    for(int i=0;i<stops;i++)
    {
        cin>>e>>ee;
        m=m-e+ee;
        if(m>max)
        max=m;
    }
    cout<<max;

    return 0;
}
