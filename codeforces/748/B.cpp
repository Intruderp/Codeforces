#include<bits/stdc++.h>
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
#define all(v) v.begin(),v.end()
#define  loop(i,x,n) for(int i=x;i<n;i++)
#define rloop(i,n) for(int i=n-1;i>=0;i--)
#define test int t; cin>>t; while(t--)
using namespace std;
/*************************************************************************************************/
void solve()
{
    string s,t;
    cin>>s>>t;
    int nn=s.length();
    map<char,char> m,n;
    loop(i,0,nn)
    {
        if((m.count(s[i]) and m[s[i]]!=t[i]) or (n.count(t[i]) and n[t[i]]!=s[i]) or (n.count(s[i]) and n[s[i]]!=t[i]) or (m.count(t[i]) and m[t[i]]!=s[i]))
        {
            cout<<-1;
            return ;
        }
        if(m.count(t[i]) || n.count(s[i]))
        continue;
        m[s[i]]=t[i];
        n[t[i]]=s[i];
    }
    int ans=m.size();
    for(auto it:m)
    {
        if(it.first==it.second)
        ans--;
    }
    cout<<ans<<'\n';
    for(auto it:m)
    {
        if(it.first==it.second)
        continue;
        cout<<it.first<<' '<<it.second<<'\n';
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