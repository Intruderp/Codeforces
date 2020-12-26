#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int i=0;
        vector <int> v(n);
        for(int i=0;i<n;i++)
        cin>>v[i];
        while(i<v.size())
        {
            if(i+1<v.size())
            {
                if(v[i]==v[i+1])
                {
                    i=i+2;
                    continue;
                }
                else
                {
                    if(v[i]==1)
                    {
                        v.erase(v.begin()+i);
                    }
                    else
                    {
                        v.erase(v.begin()+(i+1));
                    }
                    i++;
                    continue;
                    
                }
                
            }
            i++;
        }
        cout<<v.size()<<endl;
        for(int i=0;i<v.size();i++)
        cout<<v[i]<<' ';
        cout<<endl;
    }
    return 0;

}