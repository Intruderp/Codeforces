#include <iostream>
using namespace std;
int main()
{
    string s1,s2,s3,s4;
    int n;
    s1="I hate that";
    s2="I hate it";
    s3="I love that";
    s4="I love it";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i==n && i%2==0)
        {
            cout<<s4;
        }
        else if(i==n && i%2!=0)
        cout<<s2;
        else if(i!=n && i%2==0)
        cout<<s3<<" ";
        else
        {
            cout<<s1<<" ";
        }
        
        
    }
    return 0;
}