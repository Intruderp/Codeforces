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
    int n,m,x,y,z,count=0;
    cin>>n>>m;
    vi v(n+1,-1);
    mp ma;
    for(int i=1;i<=n;i++)
    ma[i]=0;
    loop(i,0,m)
    {
        cin>>x>>y>>z;
        set<int> s;
        auto it=ma.lower_bound(x);
        while(it->first<=y)
        {
            //count++;
            if(it==ma.end())
            break;
            if(it->first==z)
            {
                it++;
                continue;
            }
            s.insert(it->first);
            v[it->first]=z;
            it++;
        }
        for(int j:s)
        ma.erase(j);
    }
    for(int i=1;i<=n;i++)
    {
        if(v[i]==-1)
        cout<<"0 ";
        else 
        cout<<v[i]<<' ';
    }
} 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //test
    solve();
    return 0;
}