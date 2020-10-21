/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
string check(string s)
{
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9')
        return "YES";
    }
    return "NO";
}

int main()
{
    string s;
    cin>>s;
    cout<<check(s);

    return 0;
}
