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
    int n,ans=0;
    cin>>n;
    int a[n];
    vi v(n,-1),freq(n+1,0);
    set<int> s;
    loop(i,0,n)
    {
        cin>>a[i];
        s.insert(i+1);
    }
    loop(i,0,n)
    {
        freq[a[i]]++;
        if(freq[a[i]]>1)
        continue;
        v[i]=a[i];
        s.erase(a[i]);
        ans++;
    }
    loop(i,0,n)
    {
        if(v[i]==-1)
        {
            auto it=s.begin();
            auto it2=s.end();
            it2--;
            if(i+1!=*it)
            {
                v[i]=*it;
                s.erase(it);
            }
            else if(i+1!=*it2)
            {
                v[i]=*it2;
                s.erase(it2);
            }
            else
            {
                int x=a[i];
                v[i]=x;
                for(int j=0;j<n;j++)
                {
                    if(j!=i and v[j]==x)
                    {
                        v[j]=i+1;
                        break;
                    }
                }
            }
        }
    }
    cout<<ans<<'\n';
    for(int i:v)
    cout<<i<<' ';
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