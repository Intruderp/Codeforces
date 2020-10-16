/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int problem(int a[])
{
    int count=0;
    for(int i=0;i<3;i++)
    {
        if(a[i]==1)
        count++;
    }
    if(count>1)
    return 1;
    else
    return 0;
}

int main()
{
    int a[3],n,count=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[0]>>a[1]>>a[2];
        if(problem(a))
        count++;
       // cout<<count<<endl;
        
    }
    cout<<count<<endl;
    

    return 0;
}
