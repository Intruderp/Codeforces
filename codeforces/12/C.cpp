#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x;
    string s;
    cin>>n>>m;
    vector <int> v(n),a;
    map<string,int> mp;
    for(int i=0;i<n;i++)
       cin>>v[i];
    for(int i=0;i<m;i++)
    {
        cin>>s;
        mp[s]++;
    }
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        x=it->second;
        a.push_back(x);
    }
    sort(v.begin(),v.end());
    sort(a.begin(),a.end(),greater<int>());
    int c1=0,c2=0;
    for(int i=0;i<a.size();i++)
    {
        c1+=a[i]*v[i];
    }
    sort(v.begin(),v.end(),greater<int>());
    for(int i=0;i<a.size();i++)
    {
        c2+=a[i]*v[i];
    }

    cout<<c1<<' '<<c2;
    return 0;
}