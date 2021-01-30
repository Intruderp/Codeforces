#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s,d,x,y;
    cin>>n>>s>>d;
    bool b=false;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        if(x<s && y>d)
        b=true;
    }
    if(b)
    cout<<"Yes";
    else
    {
        cout<<"No";
    }
    return 0;
    
}