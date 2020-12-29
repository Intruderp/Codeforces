#include<iostream>
using namespace std;
int main()
{
    int x=0,y=0,z=0,a,b,c,n=3;
    int arr[3][3];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];

            if(i==0)
            x+=arr[i][j];
            else if(i==1)
            y+=arr[i][j];
            else if(i==2)
            z+=arr[i][j];

        }
    }
    b=(x-y+z)/2;
    a=z-b;
    c=x-b;
    arr[0][0]=a;
    arr[1][1]=b;
    arr[2][2]=c;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
          cout<<arr[i][j]<<' ';
        cout<<endl;
    }

}