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
                                                                                                   
void solve()
{
    int n,x,ans=0;
    cin>>n;
    set<int> s;
    vi v;
    loop(i,0,n)
    {
        cin>>x;
        if(x%2==0)
        v.pb(x);
    }
    sort(v.rbegin(),v.rend());
    for(int i=0;i<v.size();i++)
    {
        if(s.count(v[i]))
        continue;
        while (v[i]%2==0)
        {
            s.insert(v[i]);
            v[i]/=2;
            ans++;
            s.insert(v[i]);
        }
        
    }
    cout<<ans<<'\n';
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