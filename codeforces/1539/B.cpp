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
    int n,q,l,r;
    cin>>n>>q;
    string s;
    cin>>s;
    vector<vector<int>> v(26,vector<int>(n,0));
    for(int i=0;i<n;i++)
    {
        v[s[i]-'a'][i]++;
    }
    for(int i=0;i<26;i++)
    {
        int x=0;
        for(int j=0;j<n;j++)
        {
            if(v[i][j])
            x++;
            v[i][j]=x;
        }
    }
    while (q--)
    {
        cin>>l>>r;
        l--;
        r--;
        int ans=0;
        for(char a='a';a<='z';a++)
        {
            if(l==0)
            ans+=(a-'a'+1)*v[a-'a'][r];
            else
            ans+=(a-'a'+1)*(v[a-'a'][r]-v[a-'a'][l-1]);
        }
        cout<<ans<<'\n';
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