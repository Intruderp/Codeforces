/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n,n2;
    string s,s1,s2;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        s1=s[0];
        s2=s[s.length()-1];
        n2=s.length()-2;
        if(s.length()>10)
        cout<<s1+to_string(n2)+s2<<endl;
        else
        cout<<s<<endl;
    }
}