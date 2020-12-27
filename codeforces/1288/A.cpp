#include<bits/stdc++.h>
using namespace std;
string deadline(double n,double d)
{
    if(d<=n)
    return "YES";
    for(double x=0;x<=n;x++)
    {
        if((x+ceil(d/(x+1)))<=n)
         return "YES";
         //cout<<(x+ceil(d/(x+1)));
         
    }
    return "NO";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double n,d;
        cin>>n>>d;
        cout<<deadline(n,d)<<endl;
    }
    return 0;
}