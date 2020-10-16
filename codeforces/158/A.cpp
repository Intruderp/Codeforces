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
    int a[n],count=n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]<a[k-1] || a[i]<1)
        count--;
    }
    cout<<count<<endl;
    return 0;
}
