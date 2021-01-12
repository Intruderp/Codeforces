#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    int n,k;
    string s;
    char c;
    cin>>n>>k;
    cin>>s;
    unordered_map <char,int> m;
    for(int i=0;i<k;i++)
    {
        cin>>c;
        m[c]=1;
    }
    vector <int> v;
    v.push_back(-1);
    int l;
    for(int i=0;i<n;i++)
    {
        if(m.find(s[i])==m.end())
        {
            v.push_back(i);
        }
    }
    v.push_back(n);
    int count=0;
    for(int i=1;i<v.size();i++)
    {
        l=v[i]-v[i-1]-1;
        count+=(l*(l+1))/2;
        //cout<<count<<endl;
    }
    cout<<count;
    return 0;



}