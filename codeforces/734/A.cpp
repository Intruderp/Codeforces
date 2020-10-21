/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n;
    string s;
    cin>>n>>s;
    int c=0,cc=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='A')
        c++;
        else
        cc++;
    }
    if(c>cc)
    cout<<"Anton";
    else if(cc>c)
    cout<<"Danik";
    else
    cout<<"Friendship";

    return 0;
}
