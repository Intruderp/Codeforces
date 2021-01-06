#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        long long s=0,s1=0;
        if(n%2!=0 && k%2!=0)
        {
            if(k>n)
            cout<<"NO";
            else
            {
                cout<<"YES"<<endl;
                for(int i=0;i<k-1;i++)
                {
                    cout<<1<<' ';
                    s++;
                }
                cout<<n-s;
            }
            
        }
        else if(n%2==0 && k%2==0)
        {
            if(k>n)
            cout<<"NO";
            else
            {
                cout<<"YES"<<endl;
                for(int i=0;i<k-1;i++)
                {
                    cout<<1<<' ';
                    s++;
                }
                cout<<n-s;
            }
        }
        else if(n%2==0 && k%2!=0)
        {
            if(k*2>n)
            {
                cout<<"NO";
            }
            else
            {
                cout<<"YES"<<endl;
                for(int i=1;i<k;i++)
                {
                    cout<<2<<' ';
                    s=s+2;
                }
                cout<<n-s;
            }
            
        }
        else if(n%2!=0 && k%2==0)
        {
            cout<<"NO";
        }
        cout<<endl;
        
    }
    return 0;
}