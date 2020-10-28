#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    //char c;
   // int c=0;
    getline(cin,s);
    vector <int> v;
    for(int i=1;i<s.length()-1;i++)
    {
        if(s[i]!=' ' && s[i]!=',')
        v.push_back(s[i]);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==v[i+1] && i+1<v.size())
       { v.erase(v.begin()+(i+1));
         i--;
       }
    }
    cout<<v.size();
    return 0;

}