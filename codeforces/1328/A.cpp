#include <iostream>
using namespace std;
void d(int a,int b)
{   
    int q;
    if(a%b==0)
    cout<<0<<endl;
    else if(a%b!=0 && a>b)
    {
        q=a/b+1;
        cout<<q*b-a<<endl;
    }
    else if(a<b)
    cout<<b-a<<endl;
    
}
int main()
{
    int t,a,b;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b;
        d(a,b);
    }
    return 0;

}