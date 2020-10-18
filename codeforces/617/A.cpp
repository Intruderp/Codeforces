/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int x,steps=0;
    cin>>x;
    while(x>5)
    {
        x=x-5;
        steps++;
    }
    cout<<steps+1;

    return 0;
}
