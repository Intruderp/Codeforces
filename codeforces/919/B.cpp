#include<iostream>
using namespace std;
int main()
{
    long long k,j=1;
    string s;
    cin>>k;
    long long i=19,c=0;
    while(true)
    {  
        c=0;
        s=to_string(i);
        for(int ii=0;ii<s.length();ii++)
        c+=s[ii]-48;
        if(c==10)
        {
            if(j==k)
            {
                cout<<i;
                break;
            }
            else
            {
                j++;
            }
            
        }
        
            i=i+9;
        
        
    }
    return 0;
}