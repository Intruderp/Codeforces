/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a,b;
    int arr[5][5];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
      {   cin>>arr[i][j];
            if(arr[i][j]!=0)
            {a=i;
            b=j;}
      } 
    }
    cout<<abs(a-2)+abs(b-2);

    return 0;
}
