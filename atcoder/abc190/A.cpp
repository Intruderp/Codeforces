#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(c==0 && a>b)
    {
        cout<<"Takahashi";
        return 0;
    }
    else if(c==0 && b>=a)
    {
        cout<<"Aoki";
        return 0;
    }
    if(c==1 && a>=b)
    {
        cout<<"Takahashi";
    }
    else
    {
        cout<<"Aoki";
    }
    return 0;
    
}