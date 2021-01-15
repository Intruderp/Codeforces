#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    int q,n,k;
    cin>>q;
    while(q--)
    {
        cin>>n>>k;
        int a[n],c=0;
        vector <int> v;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2)
            {
                v.push_back(i);
                c++;
            }
        }
        if(v.size()==k)
        {
            cout<<"YES"<<endl;
            for(int i=0;i<v.size()-1;i++)
            {
                cout<<v[i]+1<<' ';
            }
            cout<<n;
        }
        else if(k<v.size())
        {
            bool b=false;
            if(k%2!=0 && c%2!=0)
            b=true;
            if(k%2==0 && c%2==0)
            {
                //if((c/k)%2!=0)
                b=true;
            }
            if(b)
            {
                cout<<"YES"<<endl;
                for(int i=0;i<k-1;i++)
                {
                    cout<<v[i]+1<<' ';
                }
                //cout<<v[i];
                cout<<n;
            }
            else
            {
                cout<<"NO";
            }
            
        }
        else if(k>v.size())
        {
            cout<<"NO";
        }
        cout<<endl;
        
    }
    return 0;
}