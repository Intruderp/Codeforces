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
#define test int t; cin>>t; while(t--)
using namespace std;
/*************************************************************************************************/
void solve()
{
    int n,ans,x,y,g,s,b=0,c=-1;
    cin>>n;
    int a[n];
    mp m;
    loop(i,0,n)
    {
        cin>>a[i];
        m[a[i]]++;
    }
    g=m[a[0]];
    if(n<3 || g>=n)
    {
        cout<<"0 0 0\n";
        return ;
    }
    s=0;
    auto it=m.end();
    it--;
    it--;
    x=n/2;
    y=a[x];
    for(int i=x;i>=0;i--)
    {
        if(a[i]!=y)
        {
            c=i;
            break;
        }
    }
    while(it!=m.begin())
    {
        s+=it->second;
        x=it->first;
        it--;
        if(s>g)
        break;
    }
    if(c==-1)
    {
        cout<<"0 0 0\n";
        return ;
    }
    for(int i=0;i<=c;i++)
    {
        if(a[i]<x)
        {
            b++;
            if(b>g && b>0 && s>0 && s>g && g>0 && s>0)
            c=c;
            if((b+g+s)>n/2)
            { 
                b--;
                break;
            }
        }
    }
    if(c!=-1 && b>g && b>0 && s>0 && s>g && g>0 && s>0)
    cout<<g<<' '<<s<<' '<<b<<'\n';
    else
    cout<<"0 0 0\n";
} 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    test
    solve();
    return 0;
}