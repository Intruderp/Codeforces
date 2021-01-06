#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++)
        cin>>b[i];
    vector <int> v;
    int c=0;
    for(int i=0;i<n;i++)
    {
        c+=a[i];
        v.push_back(c);
        //cout<<v[i]<<' ';

    }
    vector <int> :: iterator l,u;
    for(int i=0;i<m;i++)
    {
        l=lower_bound(v.begin(),v.end(),b[i]);
        // //u=upper_bound(v.begin(),v.end(),b[i]);
        // if(*l==*u)
        // {
        //     cout<<l-v.begin()-1<<endl;
        // }
        // else
        // {
        //     cout<<l-v.begin()<<endl;
        // }
        cout<<l-v.begin()+1<<endl;
        

    }
    return 0;

}