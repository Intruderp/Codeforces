#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int a[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        int m1=0,m2=0,m3=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if((i==0 && j==0) || (i==0 && j==m-1) || (i==n-1 && j==0) || (i==n-1 && j==m-1))
                {
                    if(a[i][j]>m1)
                    m1=a[i][j];
                }
                if(a[i][j]>m3)
                m3=a[i][j];
                if((i==0 || j==0 || i==n-1 || j==m-1))
                {
                    if(a[i][j]>m2)
                    m2=a[i][j];
                }
            }
        }
        if(m1>2 || m2>3 || m3>4)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    //cout<<1<<' ';
                    
                    if((i==0 && j==0) || (i==0 && j==m-1) || (i==n-1 && j==0) || (i==n-1 && j==m-1))
                    {
                            cout<<2<<' ';
                    }
                    else if((i==0 || j==0 || i==n-1 || j==m-1))
                    {
                        cout<<3<<' ';
                    }
                    else
                    {
                        cout<<4<<' ';
                    }
                    
                }
                cout<<endl;
            }
        }
        
    }
    return 0;
}