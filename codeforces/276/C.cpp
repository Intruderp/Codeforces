#include<bits/stdc++.h>
#define vi vector<int>
#define mp map<int,int>
#define ump unordered_map <int,int>
#define ll long long int
#define pb push_back
#define mod 1000000007
#define int long long
#define  loop(i,x,n) for(int i=x;i<n;i++)
#define rloop(i,n) for(int i=n-1;i>=0;i--)
using namespace std;
/*************************************************************************************************/
                                                                                                   
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q,x,y,an=0;
    cin>>n>>q;
    int a[n];
    loop(i,0,n)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    pair <int,int> p[q];
    vi v(n,0);
    loop(i,0,q)
    {
        cin>>x>>y;
        p[i].first=x;
        p[i].second=y;
        if(y==n)
        {
            v[x-1]++;
        }
        else
        {
            v[x-1]++;
            v[y]--;
        }
        
    }
    loop(i,1,n)
    {
        v[i]+=v[i-1];
    }
    multimap <int,int> m;
    loop(i,0,n)
    {
        m.insert({v[i],i});
    }
    vi ans(n);
    int j=0;
    for(auto it=m.begin();it!=m.end();it++)
    {
        ans[it->second]=a[j];
        j++;
    }
    loop(i,1,n)
    ans[i]+=ans[i-1];
    loop(i,0,q)
    {
        x=p[i].first;
        y=p[i].second;
        if(x==1)
        {
            an+=ans[y-1];
        }
        else
        {
            an+=ans[y-1]-ans[x-2];
        }
        
    }
    cout<<an;
    return 0;
}