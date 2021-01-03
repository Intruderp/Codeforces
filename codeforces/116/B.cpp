#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    char a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int c=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]=='W')
            {
               
                if(j-1>=0 && a[i][j-1]=='P')
                {
                    a[i][j]='.';
                    a[i][j-1]='.';
                    c++;
                }
                else if(i-1>=0 && a[i-1][j]=='P')
                {
                    a[i][j]='.';
                    a[i-1][j]='.';
                    c++;
                }

                else if(j+1<m && a[i][j+1]=='P')
                {
                    a[i][j]='.';
                    a[i][j+1]='.';
                    c++;
                }
                else if(i+1<n && a[i+1][j]=='P')
                {
                    a[i][j]='.';
                    a[i+1][j]='.';
                    c++;
                }

            }
        }
    }
    cout<<c;
}