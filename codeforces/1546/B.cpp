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
#define pr(x) cout<<x<<endl; return ;
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
    int n,m;
    cin>>n>>m;
    string s;
    int a[m][26]={0},b[m][26]={0},c=0;
    loop(i,0,n)
    {
        cin>>s;
        loop(j,0,m)
        a[j][s[j]-'a']++;
    }
    loop(i,0,n-1)
    {
        cin>>s;
        loop(j,0,m)
        b[j][s[j]-'a']++;
    }
    string ans;
    loop(i,0,m)
    {
        loop(j,0,26)
        {
            if(a[i][j]!=b[i][j])
            {
                ans.pb((char)('a'+j));
                break;
            }
        }
    }
    pr(ans)
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