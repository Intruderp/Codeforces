#include <bits/stdc++.h>
using namespace std;
bool check(string s)
{
    for(int i=1;i<s.length();i++)
    {
        if(islower(s[i]))
        return true;
    }
    return false;
}
int main()
{
    string s;
    cin>>s;
    if(check(s))
    cout<<s;
    else
    {
        for(int i=0;i<s.length();i++)
        {
            if(islower(s[i]))
            s[i]=toupper(s[i]);
            else
            {
                s[i]=tolower(s[i]);
            }
            
        }
        cout<<s;
    }
    return 0;
    

}