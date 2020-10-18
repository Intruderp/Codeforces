/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    reverse(s1.begin(),s1.end());
    if(s1==s2)
    cout<<"YES";
    else
    cout<<"NO";

    return 0;
}
