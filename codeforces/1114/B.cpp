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
    int n,m,k,x,y,ans=0;
    cin>>n>>m>>k;
    vi v1,v2;
    loop(i,0,n)
    {
        cin>>x;
        v1.pb(x);
        v2.pb(x);
    }
    sort(v2.rbegin(),v2.rend());
    mp ma;
    for(int i=0;i<m*k;i++)
    {
        ans+=v2[i];
        ma[v2[i]]++;
    }
    cout<<ans<<'\n';
    v2.clear();
    int i=0;
    multiset <int> s;
    while (v2.size()<k-1)
    {
        if(ma.count(v1[i]))
        {
            s.insert(v1[i]);
            ma[v1[i]]--;
            if(ma[v1[i]]==0)
            ma.erase(v1[i]);
        }
        if(s.size()==m)
        {
            v2.pb(i);
            s.clear();
        }
        i++;
    }
    for(int i:v2)
    cout<<i+1<<' ';
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