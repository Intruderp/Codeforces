#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    if(a*m<=b)
    {
        cout<<a*n;
    }
    else
    {
        int r=n%m;
        int r2=r*a;
        if(r2<=b)
        {
            cout<<(n/m)*b+r2;
        }
        else
        {
            cout<<(n/m)*b+b;
        }
        
        return 0;
    }
    
    return 0;
}