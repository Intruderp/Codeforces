#include <iostream>
using namespace std;
void original (string s)
{
   // string ss;
    int i=2;
    while(i<s.length())
    {
        s.erase(i,1);
        i+=1;

    }
    cout<<s<<endl;
}
int main()
{
    string s;
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>s;
        original(s);
    }
    return 0;
}