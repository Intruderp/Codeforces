#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int s=2*n;
        int a[s],c=0,cc=0;
        vector <int> o,e;
        for(int i=0;i<s;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
            {
                c++;
                e.push_back(i);
            }
            else
            {
                cc++;
                o.push_back(i);
            }
        }
        if(c==s || cc==s)
        {
            for(int i=1;i<=(s-2);i=i+2)
            {
                cout<<i<<' '<<i+1<<endl;
            }
            continue;
        }
        if(cc%2==0)
        {
            for(int i=0;i<o.size()-2;i=i+2)
            {
                cout<<o[i]+1<<' '<<o[i+1]+1<<endl;
            }
            for(int i=0;i<e.size();i=i+2)
            {
                cout<<e[i]+1<<' '<<e[i+1]+1<<endl;
            }
        }
        else
        {
            for(int i=0;i<o.size()-1;i=i+2)
            {
                cout<<o[i]+1<<' '<<o[i+1]+1<<endl;
            }
            for(int i=0;i<e.size()-1;i=i+2)
            {
                cout<<e[i]+1<<' '<<e[i+1]+1<<endl;
            }
        }

    }
    return 0;
}