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
    cin>>s;
    vector <int> v ;
    v.push_back(s[0]-48);
    for(int i=2;i<s.length();i=i+2)
    {
        v.push_back(s[i]-48);
        
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i];
        if(i<v.size()-1)
        cout<<"+";
        
    }
    

    return 0;
}
