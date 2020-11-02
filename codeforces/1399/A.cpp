#include <bits/stdc++.h>
using namespace std;
string check(int n ,vector <int> v)
{
    int c=0;
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        if(i+1<n)
        {
        if((v[i+1]-v[i])<2)
        {
           /* if(v[i+1]=v[i] && i+1<n)
            {//v.erase(v.begin()+i);
            c++;
            
            }
            else
            {
                v.erase(v.begin()+(i+1));
                
            }*/
            c++;
        }
        }
    }
    if(v.size()-c==1)
    return "YES";
    else
    {
        return "NO";
    }
    
}

int main()
{
    int t,n,x;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        cin>>n;
        vector <int> v;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            v.push_back(x);
        }
       cout<< check(n,v)<<endl;
       v.erase(v.begin(),v.end());
    }
    return 0;
}
