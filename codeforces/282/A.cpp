/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int op(string s)
{
    int i;
    i=s.find("++");
    if(i==(-1))
    return 0;
    else
    return 1;
}

int main()
{
    int n,count=0;
    string s;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        if(op(s))
        count++;
        else
        count--;
    }
    cout<<count;

    return 0;
}
