/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    while(k!=0)
    {
        if(n%10==0)
        {
            n=n/10;
            k--;
        }
        if(k!=0 && n%10!=0)
       { n--;
        k--;}
    }
    cout<<n;

    return 0;
}
