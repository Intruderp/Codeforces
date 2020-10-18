/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int c=0,cc=0;
    for(int i=0;i<s.length();i++)
    {
        if(islower(s[i]))
        c++;
        else
        cc++;
    }
    if(c<cc)
    {
        for(int i=0;i<s.length();i++)
        {
            if(islower(s[i]))
            s[i]=toupper(s[i]);
        }
        cout<<s;
    }
    if(c>=cc)
    {
        for(int i=0;i<s.length();i++)
        {
            if(isupper(s[i]))
            s[i]=tolower(s[i]);
        }
        cout<<s;
    }

    return 0;
}
