#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,xx;
    cin>>x;
    long long n=pow(2,x);
    vector <int> v(n),a(n),aa;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        a[i]=v[i];
    }
    while(v.size()!=2)
    {
        int i=0;
        while(i<v.size())
        {
            if(i+1<v.size())
            {
                if(v[i]>v[i+1])
                {
                    v.erase(v.begin()+(i+1));
                    i++;
                    continue;
                }
                else
                {
                    v.erase(v.begin()+i);
                    i++;
                    continue;
                }
                
            }
            else
            {
                i++;
            }
            
        }
       
    }
    int m=min(v[0],v[1]);
    //cout<<v[0]<<' '<<v[1];
    for(int i=0;i<n;i++)
    {
        if(a[i]==m)
        cout<<i+1;
    }
    //cout<<endl<<m;
    return 0;

}