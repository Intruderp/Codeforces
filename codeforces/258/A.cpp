#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    bool b=true;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
            s.erase(i,1);
            b=false;
            break;
        }
    }
    if(b)
    s.erase(0,1);
    cout<<s;
    return 0;
}