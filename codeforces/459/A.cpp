#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,y1,x2,y2,x3,y3,x4,y4,m;
    cin>>x1>>y1>>x2>>y2;
    if(x1==x2)
    {
        int a=abs(y1-y2);
        x3=x1+a;
        y3=y1;
        x4=x2+a;
        y4=y2;

    }
    else if(y1==y2)
    {
        int a=abs(x1-x2);
        x3=x1;
        y3=y1+a;
        x4=x2;
        y4=y2+a;
    }
    else if((y2-y1)/(x2-x1)==1 && (y2-y1)%(x2-x1)==0)
    {
        x3=x2;
        y3=y1;
        x4=x1;
        y4=y2;
    }
    else if((y2-y1)/(x2-x1)==-1 && (y2-y1)%(x2-x1)==0)
    {
        x3=x2;
        y3=y1;
        x4=x1;
        y4=y2;
    }
    else
    {
        cout<<-1;
        return 0;
    }
    cout<<x3<<' '<<y3<<' '<<x4<<' '<<y4;
    return 0;
    

    
}