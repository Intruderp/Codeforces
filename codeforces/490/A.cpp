#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=0,y=0,z=0,t;
    cin>>n;
    int a[n];
    vector <int> v,vv,vvv;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
        {
            x++;
            v.push_back(i);
        }
        
        else if(a[i]==2)
        {
            y++;
            vv.push_back(i);
        }
        else
        {
            z++;
            vvv.push_back(i);
        }
    }   
    t=min(x,min(y,z));
    cout<<t<<endl;
    for(int j=0;j<t;j++)
    {
       // for(int j=0;j<3;j++)
        
            cout<<v[j]+1<<' '<<vv[j]+1<<' '<<vvv[j]+1;
           // v.erase(v.begin()+j);
           // vv.erase(vv.begin()+j);
           // v.erase(vvv.begin()+j);
        
        cout<<endl;
    }




    return 0;
}
