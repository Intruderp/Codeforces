/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0;i<s1.length();i++)
    {
        if(s1[i]<'a')
        s1[i]+=32;
    }
    for(int i=0;i<s1.length();i++)
    {
        if(s2[i]<'a')
        s2[i]+=32;
    }
    if(s1>s2)
    cout<<1;
    else if(s1==s2)
    cout<<0;
    else
    cout<<-1;
    //cout<<s1;
    
    

    return 0;
}
