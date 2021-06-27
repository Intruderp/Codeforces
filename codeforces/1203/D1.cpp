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
string s1,s2;
bool isSubsequence(string x,string y)
{
    int i=0,j=0;
    while(i<x.length() and j<y.length())
    {
        if(x[i]==y[j])
        i++,j++;
        else 
        j++;
    }
    return i==x.length() ? true:false;
}
void solve()
{
    cin>>s1>>s2;
    string y=s1;
    int ans=0,n=y.length();
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            s1.erase(i,j-i+1);
            if(isSubsequence(s2,s1))
            ans=max(ans,j-i+1);
            s1=y;
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