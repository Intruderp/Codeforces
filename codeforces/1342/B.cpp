#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        bool b=false;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(i+1<n && s[i]!=s[i+1])
            {
                b=true;
                break;
            }
        }
        if(b)
        {
            for(int i=0;i<s.length();i++)
           {
                if(i+1<s.length() && s[i]==s[i+1])
                {
                    if(s[i]=='1')
                    {
                      s.insert((i+1),"0");
                    }
                    else
                    {
                      s.insert((i+1),"1");
                    }
                    i++;
                
                }
            }
        }
        cout<<s<<endl;

    }
    return 0;
}