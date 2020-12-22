#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x,c=0,k,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        c=0;
        k=0;
        map <int,int> m;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            m[x]++;
        }
        for(auto it=m.begin();it!=m.end();it++)
        {
            if(it->second>c)
            {
                c=it->second;
                j=it->first;
            }
        }
        for(auto it=m.begin();it!=m.end();it++)
        {
            if(it->first!=j)
            k++;
        }
        if(n==1)
        {
            cout<<0<<endl;
            continue;
        }
        if((c-k)>1)
        {
            c--;
            k++;
        }
        cout<<min(c,k)<<endl;

    }
    return 0;
}