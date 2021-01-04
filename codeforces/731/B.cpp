#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(n==1)
    {
        if(a[0]%2==0)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
        return 0;
        
    }
    for(int i=0;i<n;i++)
    {
        if(i+1<n)
        {
            if(a[i]%2==0 && a[i+1]%2==0)
            {
                a[i]=0;
                a[i+1]=0;
            }
            else if(a[i]%2!=0 && a[i+1]%2!=0)
            {
                a[i]=0;
                a[i+1]=0;
            }
            else if(a[i]%2==0 && a[i+1]%2!=0)
            {
                a[i]=0;

            }
            else if(a[i]%2!=0 && a[i+1]%2==0)
            {
                if(a[i+1]==0)
                {
                    continue;
                }
                else
                {
                    a[i]=0;
                    a[i+1]=a[i+1]-1;
                }
                
            }
        }
    }
    bool b=true;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            b=false;
            break;
        }
    }
    if(b)
    cout<<"YES";
    else
    {
        cout<<"NO";
    }
    return 0;

}