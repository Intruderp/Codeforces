#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("O3")
#pragma GCC target ("avx")
#define vi vector<int>
#define pii pair<int,int>
#define vpii vector<pair<int,int>>
#define F first
#define S second
#define mp map<int,int>
#define ump unordered_map <int,int>
#define ll long long int
#define pb push_back
#define mod 1000000007
#define int long long
#define pr(x) cout<<x<<'\n'; return ;
#define pry  cout<<"YES\n";return ;
#define prn  cout<<"NO\n"; return ;
#define all(v) v.begin(),v.end()
#define  loop(i,x,n) for(int i=x;i<n;i++)
#define rloop(i,n) for(int i=n-1;i>=0;i--)
#define test int t; cin>>t; while(t--)
using namespace std;
/*************************************************************************************************/
void solve()
{
    int n,k,c=0;
    cin>>n>>k;
    map<int,vi> m;
    mp freq;
    vi ans(n,0);
    loop(i,0,n)
    {
        int x;
        cin>>x;
        m[x].pb(i);
    }
    int x=1;
    for(auto it:m)
    {
        for(int i=0;i<min((int)it.second.size(),k);i++)
        {
            if(x>k)
            {
                x=1;
            }
            if(i==k)
            break;
            ans[it.second[i]]=x;
            freq[x]++;
            c++;
            x++;
        }
    }
    x--;
    set<int> s;
    for(int i=1;i<=x;i++)
    s.insert(i);
    if(x==k)
    s.clear();
    //cout<<x<<endl;
    for(int i:ans)
    {
        if(s.count(i))
        {
            s.erase(i);
            cout<<0<<' ';
            continue;
        }
        cout<<i<<' ';
    }
    cout<<'\n';
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