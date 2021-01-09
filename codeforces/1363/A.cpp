#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x,a;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        int c=0,r,cc=0,max=0;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            if(a%2!=0)
            {
                c++;
            }
            else
            {
                cc++;
            }
            
        }
        if(c%2==0 && c>0)
        {
            max=c-1;
        }
        else if(c%2!=0 && c>0)
        {
            max=c;
        }
        if(c==0)
        {
            cout<<"No"<<endl;
            continue;
        }
        if(cc==0 && x%2==0)
        {
            cout<<"No"<<endl;
            continue;
        }
        if((cc+max)>=x)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<"No";
        }
        cout<<endl;
        
    }
    return 0;
}