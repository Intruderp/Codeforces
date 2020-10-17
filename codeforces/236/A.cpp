/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int c=0;
    cin>>s;
    sort(s.begin(),s.end());
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==s[i+1] && i<s.length()-1)
        c++;
    }
    if((s.length()-c)%2==0)
    cout<<"CHAT WITH HER!";
    else
    cout<<"IGNORE HIM!";


    return 0;
}
