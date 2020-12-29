#include<iostream>
using namespace std;
int main()
{
    int n,d,m,x,y;
    cin>>n>>d>>m;
    for(int i=0;i<m;i++)
    {
        cin>>x>>y;
        if(((x+y-d)>=0) && ((y-x+d)>=0) && ((y-x-d)<=0) && ((y+x-2*n+d)<=0))
        cout<<"YES"<<endl;
        else
        {
            cout<<"NO"<<endl;
        }
       // cout<<y+x-2*n+d<<' '<<y+x-2*n+d<<' '<<y-x+d<<' '<<y-x+d;

    }
    return 0;
}