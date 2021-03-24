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
    cout.tie(NULL);
    int n;
    cin>>n;
    pair<int,string> p[n];
    loop(i,0,n)
    cin>>p[i].first>>p[i].second;
    int a1=INT_MAX,a2,a3,a4,a5,c1,c2,c3,c4,c5,c6,c7;
    a2=a3=a4=a5=a1;
    c1=c2=c3=c4=c5=c6=c7=a1;
    for(auto it:p)
    {
        if(it.second=="A")
        c1=min(c1,it.first);
        if(it.second=="B")
        c2=min(c2,it.first);
        if(it.second=="C")
        c3=min(c3,it.first);
        if(it.second.length()==3)
        {
            c4=min(c4,it.first);
            c1=min(c1,it.first);
            c2=min(c2,it.first);
            c3=min(c3,it.first);
        }
        if(it.second=="AB" || it.second=="BA")
        {
            c5=min(c5,it.first);
            c1=min(c1,it.first);
            c2=min(c2,it.first);
        }
        if(it.second=="AC" || it.second=="CA")
        {
            c6=min(c6,it.first);
            c1=min(c1,it.first);
            c3=min(c3,it.first);
        }
        if(it.second=="CB" || it.second=="BC")
        {
            c7=min(c7,it.first);
            c2=min(c2,it.first);
            c3=min(c3,it.first);
        }
    }
    int ans=min({c1+c2+c3,c4,c5+c3,c6+c2,c7+c1});
    if(ans>=INT_MAX)
    ans=-1;
    cout<<ans;
    return 0;
}