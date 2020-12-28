#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
      cin>>a[i];
    int max=0,m;
    vector <int> v;
    for(int i=n-1;i>=0;i--)
    {
        if(i==n-1)
        {
            v.push_back(0);
            max=a[n-1];
        }
        else
        {
            if(a[i]>max)
            {
                max=a[i];
                v.push_back(0);
            }
            else
            {
                m=max-a[i]+1;
               // cout<<m<<endl;
                v.push_back(m);
            }
            
        }
    } 
        int x=v.size()-1;
        //cout<<x<<endl;
        for(int i=x;i>=0;i--)
        {
            cout<<v[i]<<' ';
        }
        return 0;
        
    

}