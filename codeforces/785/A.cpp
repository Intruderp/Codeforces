#include <iostream>
using namespace std;
int main()
{
    int n,c=0;
    string s;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        if(s=="Icosahedron")
        c=c+20;
        else if(s=="Dodecahedron")
        c=c+12;
        else if(s=="Cube")
        c=c+6;
        else if(s=="Octahedron")
        c=c+8;
        else
        {
            c=c+4;
        }
        
    }
    cout<<c;
    return 0;
}