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
    int n,q,x,y,p,l,r;
    char c;
    string s;
    cin>>s;
    map<char,set<int>> m;
    n=s.length();
    loop(i,0,n)
    m[s[i]].insert(i+1);
    cin>>q;
    while (q--)
    {
        cin>>x;
        if(x==1)
        {
            cin>>p>>c;
            m[s[p-1]].erase(p);
            m[c].insert(p);
            s[p-1]=c;
        }
        else
        {
            int ans=0;
            cin>>l>>r;
            for(char i='a';i<='z';i++)
            {
                if(m.count(i))
                {
                    auto it=m[i].lower_bound(l);
                    if(it!=m[i].end())
                    {
                        y=*it;
                        if(y<=r)
                        ans++;
                    }
                }
            }
            cout<<ans<<'\n';
        }
    }
    
} 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}