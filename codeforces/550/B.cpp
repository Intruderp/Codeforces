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
vector<vector<int> > ans;
set<vector<int> > s;
void help(int i,int n,vector<int> &v,vector<int> &a)
{
    if(v.size()>=2)
    {
        if(s.count(v)==0)
        {
            vi v2;
            for(auto it:v)
            v2.pb(a[it]);
            ans.pb(v2);
        }
        s.insert(v);
    }
    if(i>=n)
    return ;
    v.push_back(i);
    help(i+1,n,v,a);
    v.pop_back();
    help(i+1,n,v,a);
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,l,r,x,an=0,sum=0,m1,m2;
    cin>>n>>l>>r>>x;
    vi a(n),v;
    loop(i,0,n)
    cin>>a[i];
    help(0,n,v,a);
    for(int i=0;i<ans.size();i++)
    {
        sum=0;
        m1=INT_MAX;
        m2=INT_MIN;
        for(int j=0;j<ans[i].size();j++)
        {
            sum+=ans[i][j];
            m1=min(m1,ans[i][j]);
            m2=max(m2,ans[i][j]);
           // cout<<ans[i][j]<<' ';
        }
        //cout<<endl;
        if(sum>=l && sum<=r && m2-m1>=x)
        an++;
    }
    cout<<an;
    return 0;
}