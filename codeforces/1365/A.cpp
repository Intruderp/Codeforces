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
            for (int j=0;j<m;j++)
            {
                cin>>a[i][j];
               // cout<<i<<' '<<j;
            }
            
        }
        vector <int> r,c;
        for(int i=0;i<n;i++)
        { 
            bool b=true;
            for (int j=0;j<m;j++)
            {
                if(a[i][j]==1)
                {
                    b=false;
                    break;
                }
            }
            if(b)
            {
                r.push_back(i);
            }
            
        }
        for(int j=0;j<m;j++)
        { 
            bool b=true;
            for (int i=0;i<n;i++)
            {
                if(a[i][j]==1)
                {
                    b=false;
                    break;
                }
            }
            if(b)
            {
                c.push_back(j);
            }
            
        }
        //cout<<r.size()<<' '<<c.size();
        int x=0;
        while(true)
        {
            if(r.size()==0 || c.size()==0)
            {
                if(x%2==0)
                {
                    cout<<"Vivek"<<endl;
                }
                else
                {
                    cout<<"Ashish"<<endl;
                }
                break;
                
            }
            if(min(r.size(),c.size())%2!=0)
            {
                cout<<"Ashish"<<endl;
            }
            else
            cout<<"Vivek"<<endl;
            break;
        }

    }
    return 0;
}