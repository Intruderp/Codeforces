/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int k,n,w,cost=0;
    cin>>k>>n>>w;
    for(int i=1;i<=w;i++)
    {
        cost+=i*k;
    }
    if(cost>n)
    cout<<cost-n;
    else
    cout<<0;

    return 0;
}
