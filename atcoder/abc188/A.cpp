#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,x,y;
    cin>>a>>b;
    x=min(a,b);
    y=max(a,b);
    if(x+3>y)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    return 0;
    
}
