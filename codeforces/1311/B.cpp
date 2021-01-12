#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        bool b=true;
        vector <int> v(n);
        unordered_map <int,int> um;
        for(int i=0;i<n;i++)
            cin>>v[i];
        for(int i=0;i<m;i++)
        {
            cin>>x;
            um[x]=1;
        }
        int i=0;
        while(i<v.size())
        {
            if(i+1<n && v[i]>v[i+1])
            {
                if(um.find(i+1)==um.end())
                {
                    b=false;
                     //for(int i=0;i<n;i++)
                       // cout<<v[i]<<endl;
                    break;
                }
                else
                {
                    swap(v[i],v[i+1]);
                    i=0;
                }
                
            }
            else
            {
                i++;
            }
            
        }
        // for(int i=n-1;i>0;i--)
        // {
        //     if(v[i]<v[i-1])
        //     {
        //         if(um.find(i)==um.end())
        //         {
        //             b=false;
        //             break;
        //         }
        //         else
        //         {
        //             swap(v[i],v[i-1]);
        //         }
                
        //     }
        // }
        if(b)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
        cout<<endl;

    }
    return 0;
}