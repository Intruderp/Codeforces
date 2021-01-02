#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int c1=0,c2=0;
    for(int i=0;i<3;i++)
    {
        c1+=s1[i]-48;
        c2+=s2[i]-48;
    }
    if(c1>=c2)
    cout<<c1<<endl;
    else
    {
        cout<<c2<<endl;
    }
    return 0;
}
