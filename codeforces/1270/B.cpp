#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        bool b=true;
        vector <int> v(n);
        for(int i=0;i<n;i++)
            cin>>v[i];
        for(int i=0;i<n;i++)
        {
            if(i+1<v.size() && abs(v[i]-v[i+1])>1)
            {
                cout<<"YES"<<endl;
                cout<<i+1<<' '<<i+2<<endl;
                b=false;
                break;
            }
        }
        if(b)
        cout<<"NO"<<endl;

    }
}