#include<bits/stdc++.h>
#define vi vector<int>
#define ma map<int,int>
#define uma unordered_map <int,int>
#define ll long long int
#define pb push_back
#define mod 1000000007
#define int long long
#define  loop(i,x,n) for(int i=x;i<n;i++)
#define rloop(i,n) for(int i=n-1;i>=0;i--)
#define test int t;cin>>t; while(t--)
#define mp make_pair
#define pr pair<int,int>
using namespace std;
/*************************************************************************************************/
vector<int> v[105];
int vis[105];
                                                                                                   
void dfs(int n)
{
    vis[n]=1;
    for(int i:v[n])
    {
        if(vis[i]==0)
        dfs(i);
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m,x,y,a=0;
    cin>>n>>m;
    vector<set<int>> l(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        loop(j,0,x)
        {
            cin>>y;
            l[i].insert(y);
        }
        if(x!=0)
        a=1;
    }
    // adjacency list
    for(int i=1;i<=n;i++)
    {
        bool b=false;
        for(int j=i+1;j<=n;j++)
        {
            for(auto k:l[i])
            {
                if(l[j].count(k))
                {
                    v[i].push_back(j);
                    v[j].push_back(i);
                    b=true;
                    break;
                }
            }
            // if(b)
            // break;
        }
        // cout<<"i ="<<i<<"   ";
        // for(auto it:l[i])
        // cout<<it<<' ';
        // cout<<endl;
    }
    int cc=0;
    //number of dfs call required to connect them
    for(int i=1;i<=n;i++)
    {
        if(vis[i]==0)
        dfs(i),cc++;
    }
    if(a==0)
    cc=n+1;
    cout<<cc-1;
    return 0;
}