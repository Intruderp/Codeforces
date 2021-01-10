#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,ss;
    cin>>s;
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        if(i==0 && s[i]>'4' && s[i]!='9')
        {
            ss+=to_string(9-s[i]+48);
        }
        else if(i==0)
        {
            ss+=s[i];
        }
        
        else if(i!=0 && s[i]>'4')
        {
            ss+=to_string(9-s[i]+48);
        }
        else if(i!=0 && s[i]<'5')
        {
            ss+=s[i];
        }
        
        
    }
    cout<<ss;
    return 0;
}