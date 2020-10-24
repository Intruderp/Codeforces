#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a==1 && b!=1 && c!=1)
    cout<<(a+b)*c;
    else if(c==1 && a!=1 && b!=1)
    cout<<a*(b+c);
    else if(b==1 && a!=1 && c!=1)
    cout<<(min(a,c)+b)*max(a,c);
    else if(a==1 && b==1 && c!=1)
    cout<<(a+b)*c;
    else if(a!=1 && b==1 && c==1)
    cout<<a*(b+c);
    else if(a==1 && b!=1 && c==1)
    cout<<(a+b)+c;
    else if(a==1 && b==1 && c==1)
    cout<<3;
    else
    {
        cout<<a*b*c;
    }
    return 0;
    
}