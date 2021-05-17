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
    int n,ans=0,c=0,x,y;
    cin>>n;
    int a[n];
    loop(i,0,n)
    cin>>a[i];
    vector<int> v(n,0);
    set<int> s;
    rloop(i,n)
    {
        c++;
        s.insert(a[i]);
        auto it=s.end();
        it--;
        if(s.size()==c && *s.begin()==1 && (*it)==c)
        v[i]=1;
    }
    s.clear();
    c=0;
    vector<pair<int,int>> p;
    loop(i,0,n-1)
    {
        c++;
        s.insert(a[i]);
        auto it=s.end();
        it--;
        if(s.size()==c && *s.begin()==1 && (*it)==c && v[i+1]==1)
        {
            ans++;
            p.push_back({i+1,n-(i+1)});
        }
    }
    cout<<ans<<'\n';
    for(auto it:p)
    cout<<it.first<<' '<<it.second<<'\n';
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