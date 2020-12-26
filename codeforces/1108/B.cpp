#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y;
    cin>>n;
    vector <int> v(n);
    vector <int> a;
    for(int i=0;i<n;i++)
     cin>>v[i];
    sort(v.begin(),v.end());
    x=v[n-1];
    for(int i=0;i<n;i++)
    {
        y=v[i];
        for(int j=1;j<=x;j++)
        {
            if(x%j==0)
            a.push_back(j);
        }
        for(int j=1;j<=y;j++)
        {
            if(y%j==0)
            a.push_back(j);
        }
        if(a.size()==n)
        {
            sort(a.begin(),a.end());
            bool b=true;
            for(int k=0;k<n;k++)
            {
                if(a[k]!=v[k])
                {
                    b=false;
                    break;
                }
            }
            if(b)
            {
                cout<<x<<' '<<y;
            }
            else
            {
                a.clear();
            }
            
        }
        else
        {
            a.clear();
        }
        
    }
    return 0;
}