#include<bits/stdc++.h> 
using namespace std;
long long gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 
// Function to return LCM of two numbers 
long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
int main()
{
    int t;
    string s1,s2;
    cin>>t;
    //cout<<boost::math::lcm(10,20);
    while(t--)
    {
        cin>>s1>>s2;
        if(s1==s2)
        {
            cout<<s1;
        }
        else if(s1.length()==s2.length() && s2!=s1)
        {
            cout<<-1;
        }
        else
        {
            string s3,s4;
            if(s1.length()>s2.length())
            {
                s3=s2;
                s4=s1;
            }
            else
            {
                s3=s1;
                s4=s2;
            }
           string s5=s4.substr(0,s3.length());
           if(s5!=s3)
           {
               cout<<-1;
           }
           else
           {
               int x=lcm(s3.length(),s4.length());
               int y=x;
               y=y/s3.length();
               x=x/s4.length();
               s5="";
               for(int i=0;i<x;i++)
               s5+=s4;
               string s6;
               for(int i=0;i<y;i++)
               s6+=s3;
               if(s5==s6)
               cout<<s6;
               else
               {
                   cout<<-1;
               }
               

                
           }
           
            
        }
        cout<<endl;
    }


}