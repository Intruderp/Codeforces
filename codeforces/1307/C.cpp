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
    int m1[26]={0};
    int m2[26][26]={0};
    int ans=0,n,a1;
    string s;
    cin>>s;
    n=s.length();
    loop(i,0,n)
    m1[s[i]-'a']++;
    loop(i,0,n)
    {
        ans=max(ans,m1[s[i]-'a']);
        m1[s[i]-'a']--;
        for(char c='a';c<='z';c++)
        {
            string st="aa";
            st[0]=s[i];
            st[1]=c;
            if(m1[c-'a'])
            m2[st[0]-'a'][st[1]-'a']+=m1[c-'a'];
            ans=max(ans,m2[st[0]-'a'][st[1]-'a']);
        }

    }
    pr(ans);
} 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}