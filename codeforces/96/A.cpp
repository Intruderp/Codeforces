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
    int c=1;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==s[i+1] && i<s.length()-1)
        c++;
        else
        c=1;
        if(c>=7)
        {
            cout<<"YES";
            break;
        }
    }
    if(c<7)
    cout<<"NO";

    return 0;
}
