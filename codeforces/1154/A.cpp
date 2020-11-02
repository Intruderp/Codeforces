#include <iostream>
using namespace std;
int main()
{
    int a[4];
    int j,max,c=0,cc=0;
    cin>>a[0]>>a[1]>>a[2]>>a[3];
    max=a[0];
    j=0;
    for(int i=0;i<4;i++)
    {
        if(a[i]>max)
        {
          max=a[i];
          j=i;
        }
    }
    for(int i=0;i<4;i++)
    {
        if(i!=j)
       { cout<<max-a[i];
         c++;
       }
       if(c!=0 && cc<2)
       {
           cout<<' ';
           cc++;
       }
       c=0;
       

    }
    return 0;

}