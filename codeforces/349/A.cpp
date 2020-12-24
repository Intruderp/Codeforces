#include<iostream>
using namespace std;
string ticket(long long n,long long a[])
{
    long long c=0,cc=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==25)
        {
            c+=1;
            continue;
        }
        int change;
        if(a[i]==50)
        {
            //change=1;
            if(c>=1)
            {
                c=c-1;
                cc++;
                continue;
            }
            else
            {
                return "NO";
            }
            
        }
        if(a[i]==100)
        {
            //change=3;
            if(c>=3 ||(c>=1 && cc>=1))
            {  
                if(cc>=1)
                {
                    cc--;
                    c--;
                }
                else
                {
                    c=c-3;
                }
                
                continue;
            }             
            else
            {
                return "NO";
            }
            
        }
    }
    return "YES";
}
int main()
{
    long long n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++)
     cin>>a[i];
    cout<<ticket(n,a);
    return 0;
}