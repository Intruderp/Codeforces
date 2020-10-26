#include <iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s.substr(i,3)=="WUB")
        {
           // cout<<i<<endl;
            s.replace(i,3," ");
          //  i+=2;
        }

        
    }
    for(int i=0;i<s.length();i++)
    {
      
        if(s[0]==' ')
          s.erase(0,1);
        if(s[s.length()-1]==' ')
          s.erase(s.length()-1);
        if(s[i]==' ' && s[i+1]==' ' && i+1<s.length())
          s.erase(i,1);
    }
    cout<<s;
    return 0;
}